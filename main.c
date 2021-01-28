#include <stdio.h>
int *ptr_int, var;

void init_ptr(){
  int local = 57;
  ptr_int = &local;
  var = *ptr_int;
  *ptr_int = 23;
}
  int main() {
   init_ptr();
 //  var = *ptr_int; //se corrompieron 
  // *ptr_int = 20; //no es  correcto 
  return 0;

  }

  