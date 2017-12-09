#include <iostream>
#include <vector>

int main() {
  int n;         // Init variable
  std::cin >> n; // Insert number of hills into n
  std::vector<int> hills{};
  int highestIndex = 0;
  for ( int a = 0; a < n; a++ ) { // put shit into vector
    int b;
    std::cin >> b;
    hills.push_back( b );
    highestIndex = b == n ? a : highestIndex;
  }
  int possibilities = 0;
  for ( int a = 0; a < hills.size(); a++ ) {
    if ( a > highestIndex ) {
      for ( int b = a; b >= highestIndex; b-- ) {
        if ( hills[ b ] == n ) {
          possibilities++;
        } else if ( hills[ b ] > hills[ a ] ) {
          break;
        }
      }
    } else if ( a < highestIndex ) {
      for ( int b = a; b <= highestIndex; b++ ) {
        if ( hills[ b ] == n ) {
          possibilities++;
        } else if ( hills[ b ] > hills[ a ] ) {
          break;
        }
      }
    }
  }
  std::cout << possibilities; // print number of possibilities.
}
