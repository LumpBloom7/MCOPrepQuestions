#include <iostream>
#include <algorithm>
#include <string>

int main() {
  int count = 3;
  for ( int a = -20000; a <= 20000; a++ ) {
    std::string output{};
    if ( a % 3 == 0 && a != 0 ) { output.append( "Johnny" ); }
    if ( a % 5 == 0 && a != 0 ) { output.append( "English" ); }
    if ( output == "JohnnyEnglish" && a % 20 == 0 && a != 0 ) {
      output = "";
      std::string tmp = std::to_string( a );
      std::reverse( tmp.begin(), tmp.end() );
      for ( int b = 0; b < count; b++ ) { output.append( "EnglishJohnny" + tmp ); }
      count++;
    } else if ( output == "" ) {
      output = std::to_string( a );
    }
    std::cout << output << std::endl;
  }
  std::cin.ignore();
}
