#include <stdio.h>
#include <assert.h>

int suma (int a, int b){
  return a+b;
}

int main(){

  assert(suma(2,3)==5);
  assert(suma(-1,1)==0);
  assert(suma(10,10)==20);  

<<<<<<< HEAD

  printf("Editat en local. EXIT: Tots els tests han passat correctament!\n");
=======
  printf(" Editat en local. EXIT: Tots els tests han passat correctament!\n");
>>>>>>> db107aa (Canvi local)
  return 0;

}
