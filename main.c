#include <stdio.h>
#include <assert.h>

int suma (int a, int b){
  return a+b;
}

int main(){

  assert(suma(2,3)==9);
  assert(suma(-1,1)==0);
  assert(suma(10,10)==20);  

  printf("EXIT: Tots els tests han passat correctament!\n");
  return 0;

}
