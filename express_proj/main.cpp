#include <iostream>

class A  {       
private:          
    int x;       
protected:          
    int y;       
public:          
    A( int nx, int ny ) {  x = nx;  y = ny;  }          
    int GetX( ){ return x; }
};

class b : public A {
    public:
    b(int _x ,int _y) : A(_x,_y) {}
    void suma(int* _x){ *_x = A::GetX() + y; }
    void iloczyn(int &_x){ _x = A::GetX() * y; }
};

int main(){
    
    b x(1,2);

    int w;
    int *q = new int;
    x.suma(q);
    x.iloczyn(w);

    std::cout << "suma: " << *q << " iloczyn: " << w << "\n";


    return 0;
}