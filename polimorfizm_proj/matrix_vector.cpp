#include <iostream>

template<typename t>class vector{
    protected:
        t* tab;
        int size;
    public:
        vector(){}
        vector(int _size):size(_size){
            tab = new t[size];
        }
        virtual void show(){
            for (int i = 0 ; i < size ; i++){
                std::cout << "[" << tab[i] << "]" << "\n";
            }
        }
        virtual vector operator+(vector other) = 0;
        virtual t& operator[] (int _index){
            return tab[_index];
        }
        virtual operator delete(){~vector();}
        virtual ~vector(){
            delete [] tab;
            tab = nullptr;
        }
};

template<typename t> class matrix : public vector<t>{
        protected:
            vector* tab;
            int size;
        public:
            matrix():vector(){}
            matrix(int _size_X , int _size_y):vector(_size_y),size(_size_x){
                tab = new vector<t>[size];
            }
            void show(){
                for (int i = 0 ; i < size ; i++){
                    tab[i].show();
                }
            }
            vector& operator[](int _index){
                return tab[_index];
            }
            matrix operator+(matrix other){
                matrix<t> temp;
                for (int i = 0 ; i < size ; i++ ){
                    tab[i] + other[i]
                }
                return temp;
            }
            operator delete(){~matrix();}
            virtual ~matrix(){
                delete vector;
                delete [] tab;
                tab = nullptr;
            }
};


int main(){
    vector<int> a(10);

    return 0;
}