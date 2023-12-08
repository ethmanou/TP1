#include <iostream>  // Inclusion d'un fichier standard
#include "Point.hpp" // Inclusion d'un fichier du répertoire courant

int Point::getX() {
  return x;
}

void initialiser(Point& p){
    p.x =0 ;
}