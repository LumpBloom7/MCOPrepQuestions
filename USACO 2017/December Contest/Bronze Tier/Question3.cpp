#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>

struct cowStats {
  int day;
  std::string cow;
  int change;
};

int main() {
  std::ofstream fout( "measurement.out" );
  std::ifstream fin( "measurement.in" );

  int bessie = 7, mildred = 7, elsie = 7;
  bool bFramed = true;
  bool mFramed = true;
  bool eFramed = true;

  std::vector<cowStats> stats;

  int n;
  fin >> n;

  for ( int a = 0; a < n; a++ ) {
    cowStats b;

    fin >> b.day >> b.cow >> b.change;

    stats.push_back( b );
  }
  std::sort( stats.begin(), stats.end(), []( const cowStats &lhs, const cowStats &rhs ) { return lhs.day < rhs.day; } );
  int changes = 0;
  for ( int a = 0; a < n; a++ ) {
    bool change = false;
    if ( stats[ a ].cow == "Bessie" ) {
      bessie += stats[ a ].change;
    } else if ( stats[ a ].cow == "Mildred" ) {
      mildred += stats[ a ].change;
    } else if ( stats[ a ].cow == "Elsie" ) {
      elsie += stats[ a ].change;
    }
    if ( bessie >= mildred && bessie >= elsie ) {
      if ( !bFramed ) {
        bFramed = true;
        change = true;
      }
    } else {
      if ( bFramed ) {
        bFramed = false;
        change = true;
      }
    }
    if ( mildred >= bessie && mildred >= elsie ) {
      if ( !mFramed ) {
        mFramed = true;
        change = true;
      }
    } else {
      if ( mFramed ) {
        mFramed = false;
        change = true;
      }
    }
    if ( elsie >= bessie && elsie >= mildred ) {
      if ( !eFramed ) {
        eFramed = true;
        change = true;
      }
    } else {
      if ( eFramed ) {
        eFramed = false;
        change = true;
      }
    }
    if ( change ) { changes++; }
  }

  fout << changes;
}
