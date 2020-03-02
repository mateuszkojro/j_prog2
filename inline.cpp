#include <iostream>

int do_something();

int main(){

  do_something();

}

inline int do_something(){
  printf("zostalem skopiowany tutaj\n");
  return 0;
}
