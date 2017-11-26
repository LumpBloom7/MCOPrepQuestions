#include <iostream>
#include <cmath>

int main() {
  double r, pi = 3.14;
  char t;
  while ( true ) {
    std::cin >> t >> r;

    switch ( t ) {
    case 'c': std::cout << ( 2 * pi * r ) << std::endl; break;
    case 'a': std::cout << ( pi * pow( r, 2 ) ) << std::endl; break;
    case 'v': std::cout << ( 4 * pi * ( pow( r, 3 ) / 3 ) ) << std::endl; break;
    default: std::cout << "Invalid Argument" << std::endl;
    }
  }
}
