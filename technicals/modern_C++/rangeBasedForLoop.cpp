#include <cctype>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
  // iterating over a C-Array
  int myArray[5] = {1, 2, 3, 4, 5}; // from C++11 the '=' should be omit also
  for (int &x : myArray) x *= 2;    // bind with reference could change the content
  for (int x: myArray) std::cout << x << " ";
  std::cout << std::endl;

  // the second parameter for std::for_each should be the positon over the last element
  std::for_each (myArray, myArray+5, [](int value){std::cout<<value<<std::endl;});

  // iterating over a std::vector
  std::vector<int> vecInt{10, 29, 34, 43, 58};
  for (int &x: vecInt) x *= 2;
  for (int x: vecInt) std::cout << x << " ";
  std::cout << std::endl;

  std::for_each (vecInt.begin(), vecInt.end(), [](int &item){ item += 10; });

  std::for_each (vecInt.begin(), vecInt.end(), [](int item) {std::cout << item << " ";});

  std::cout << std::endl;

  std::string str{"Only for Testing Purpose."};
  // iterating over a std::string
  for (char& c: str) c = std::toupper(c);
  for (char c: str) std::cout << c;
  std::cout << std::endl;

  // switch each character from upper to lower case and vice versa
  str = {"Only for Testing Purpose."};
  for (char& c: str) c = std::isupper(c)? std::tolower(c): std::toupper(c);
  for (char c: str) std::cout << c;
  std::cout << std::endl;

  std::cout << std::endl;

  //iterating over a std::map
  std::map<std::string, std::string> phonebook{{"Bjarne Stroustrup", "+1 (212) 555-1212"}, {"Gabriel Dos Reis", "+1 (858) 555-9734"}, {"Daveed Vandevoorde", "+44 99 74855424"}};

  // the old way
  std::map<std::string, std::string>::iterator mapIt;
  for (mapIt = phonebook.begin(); mapIt != phonebook.end(); ++mapIt){
    std::cout << mapIt->first <<  ": " << mapIt->second << std::endl;
  }

  // the new way
  for (auto mapIt: phonebook) std::cout << mapIt.first << ": " << mapIt.second << std::endl;

  std::cout << std::endl;

  std::string contents{"hhhhhhhhhhhhhhh"};

  for (auto &c : contents){
    c = 'H';
  }

  for (char &c : contents){
    std::cout<< "xxxxx " << c;
  }
  
  std::cout<<std::endl;
  
  return 0;
}
