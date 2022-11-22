#include <string>
#include <utility>

struct MyStruct{
  MyStruct(int i, double d, const std::string& s){}
};

template <typename T, typename ... Args>
T createT(Args&& ... args){
  return T(std::forward<Args>(args)...);
}

int main(){

  auto d = createT<int>();

  auto lValue = createT<int>(1);

  auto i = createT<int>(lValue);

  auto s = createT<std::string>("Only for testing purpose.");

  auto st = createT<std::string>("Rainer Grimm");

  auto myStr = createT<MyStruct>(lValue, 3.14, "Rainer Grimm");

}
