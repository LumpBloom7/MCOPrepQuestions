#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

int main() {
  std::ofstream fout( "shuffle.out" );
  std::ifstream fin( "shuffle.in" );

  // Get the value of N
  int n;
  fin >> n;

  //Get the details of the shuffle.
  std::vector<int> shuffle{};
  for ( int a = 0; a < n; a++ ) {
    int b;
    fin >> b;
    shuffle.push_back( b );
  }

  // Get the position of the cows after the shuffle
  std::vector<int> cows{};
  for ( int a = 0; a < n; a++ ) {
    int b;
    fin >> b;
    cows.push_back( b );
  }

  // Perform the shuffle in reverse. The new positions furing the shuffle would be in cowsAfter
  // After the shuffle is finished, transfer all values from cowsAfter into cows.
  // Repeat 3 times.
  std::vector<int> cowsAfter = cows;
  for ( int b = 0; b < 3; b++ ) {
    for ( int a = n - 1; a >= 0; a-- ) {
      cowsAfter[a] = cows[shuffle[a]-1];
    }
    cows = cowsAfter;
  }

  //Output position of cows before 3 shuffles.
  for ( int a = 0; a < n; a++ ) { fout << cows[ a ] << std::endl; }
}
