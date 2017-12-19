#include <iostream>
#include <fstream>

struct Coord { // Prepare something to hold coordinate without making this code a mess.
  int x, y;
};

int main() {
  std::ofstream fout( "billboard.out" );
  std::ifstream fin( "billboard.in" );

  Coord a1, a2; // Billboard A
  Coord b1, b2; // Billboard B
  Coord t1, t2; // Truck

  // Retrieve coordinates for all corners
  fin >> a1.x >> a1.y >> a2.x >> a2.y;
  fin >> b1.x >> b1.y >> b2.x >> b2.y;
  fin >> t1.x >> t1.y >> t2.x >> t2.y;

  // Count the total area
  int totalArea = ( ( a2.x - a1.x ) * ( a2.y - a1.y ) ) + ( ( b2.x - b1.x ) * ( b2.y - b1.y ) );

  // Scan through all coordinates taken by both billboards, if it overlaps with the coordinates taken by the truck,
  // deduct 1 unit from the total visible area.
  for ( int a = a1.x; a < a2.x; a++ ) {
    if ( a >= t1.x && a < t2.x ) {
      for ( int b = a1.y; b < a2.y; b++ ) {
        if ( b >= t1.y && b < t2.y ) { totalArea--; }
      }
    }
  }
  for ( int a = b1.x; a < b2.x; a++ ) {
    if ( a >= t1.x && a < t2.x ) {
      for ( int b = b1.y; b < b2.y; b++ ) {
        if ( b >= t1.y && b < t2.y ) { totalArea--; }
      }
    }
  }
  fout << totalArea;
}
