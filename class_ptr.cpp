#include <iostream>

class point{
public:
  int x;
  int y;

  void do_sth();
};

int main(){
point a;
point* b = new point;

b = &a;
b->x = 10;
b->y =11;

printf("%d\t%d\n",b->x,b->y );


}

void point::do_sth(){
  printf("taki sobie tekst\n");
}
