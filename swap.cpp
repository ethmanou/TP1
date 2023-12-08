#include <iostream>

void swap(int & a , int & b ){
  a = b+a;
  b = a-b;
  a = a-b;
} 



void fonction1(int a) {
  std::cout << &a << std::endl;
}

void fonction2(int& a) {
  std::cout << &a << std::endl;
}

int main(int, char **) {
  int  a = 3;
int  b = a;
int& c = a;

std::cout << a << " " << b << " " << c << std::endl;
b = 4;
std::cout << a << " " << b << " " << c << std::endl;
c = 5;
std::cout << a << " " << b << " " << c << std::endl;
a = 6;
std::cout << a << " " << b << " " << c << std::endl;

}

