#include <iostream>

// primary template
template<int ...> struct Sum;

// specialization for no argument
template<>struct
Sum<>{
  static const int value = 0;
};

// specialization for one or more arguments
template<int i, int ... tail> struct
Sum<i, tail...>{
  static const int value = i + Sum<tail...>::value;
};

template<int ...> struct Mult;

template<>struct
Mult<>{
  static const int value = 1;
};

template<int i, int ... tail> struct
Mult<i, tail...>{
  static const int value = i * Mult<tail...>::value;
};

int main(){

  std::cout << std::endl;

  std::cout << "Sum<>: " << Sum<>::value <<std::endl;
  std::cout << "Sum<1, 2, 3, 4, 5>::value: " << Sum<1, 2, 3, 4, 5>::value << std::endl;
  std::cout << "Sum<-20, -10, 10, 20>::value: " << Sum<-20, -10, 10, 20>::value << std::endl;

  std::cout << std::endl;

  std::cout << "Mult<>: " << Mult<>::value <<std::endl;
  std::cout << "Mult<1, 2, 3, 4, 5>::value: " << Mult<1, 2, 3, 4, 5>::value << std::endl;
  std::cout << "Mult<-20, -10, 10, 20>::value: " << Mult<-20, -10, 10,  20>::value << std::endl;


  std::cout << std::endl;

}
