#include <iostream>

 

int main(int, char**) {
    const int TAILLE = 500;

   int * ptr = (int*) malloc(5*sizeof(int));

    free(ptr);

   return 0;

}