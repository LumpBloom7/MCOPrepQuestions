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
  int highestEncountered = 0;
  for ( int a = highestIndex - 1; a >= 0; a-- ) { // Go left of the highest hill
    highestEncountered = highestEncountered < hills[ a ] ? hills[ a ] : highestEncountered;
    possibilities = hills[ a ] >= highestEncountered ? possibilities + 1 : possibilities;
  }
  highestEncountered = 0;
  for ( int a = highestIndex + 1; a < hills.size(); a++ ) { // Go right of the highest hill
    highestEncountered = highestEncountered < hills[ a ] ? hills[ a ] : highestEncountered;
    possibilities = hills[ a ] >= highestEncountered ? possibilities + 1 : possibilities;
  }
  std::cout << possibilities; // print number of possibilities.
}
