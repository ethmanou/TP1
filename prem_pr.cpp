#include <iostream>

int main(int, char ** ) {
  int i;

  for(i=0; i< 120; ++i){
    std::cout << "Bonjour les ZZ" << 2 << "\n";
  }
  std::string prenom;     // type chaines de caracteres"
  int age;

  std::cout << "Quel est votre prénom ?" << std::endl;
  std::cin  >> prenom;
  std::cout << "Quel est votre age ?" << std::endl;
  std::cin  >> age ;
  std::cout << "Bonjour "<< prenom << std::endl;
  return 0;
}

