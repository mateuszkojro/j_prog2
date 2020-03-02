#include <iostream>

class point{
public:
  static int id;

  point();
  static int get_number();

};

int point::id = 0;

int main(){

  point tab[10];

}
point::point(){
  this->id++;
  printf("Created point nr: %d\n",this->id );
}

int point::get_number(){
  return point::id;
}
