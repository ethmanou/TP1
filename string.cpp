#include <iostream>

void prog1() {

  char s[10];
  // std::string s;
  // char *      s;

  std::cin >> s;

  std::cout << "#" << s << "#" << std::endl;
  for (int i = 0; i< 10; ++i)
    std::cout << "@" << s[i] << "@" << (int)s[i] << "@" << std::endl;

}

int main(int, char**){ 
   int  a = 5;
   int &r = a;

   std::cout << a << " " << r << std::endl;
   std::cin  >> a;
   std::cout << a << " " << r << std::endl;
   std::cin  >> r;
   std::cout << a << " " << r << std::endl;
   //prog1();
}

