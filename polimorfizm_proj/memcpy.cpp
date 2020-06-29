#include <iostream>
#include <cstdlib>
#include <string.h>
#include <chrono>

/*
    Some fun with memcpy() not rly somithing z polimorfizmem 
*/

class show{
    char* txt;
public:
//virtual std::ostream& operator<< (std::ostream& out ) = 0;
};
class dbg{
    private:
    char* txt;
    public:
    dbg(const char* in){
        txt = new char[sizeof(in) + 1];
        std::cout << sizeof(char) << '\n';
        memcpy(txt, in, __CHAR_BIT__ * (sizeof(in)+1));
        }
     friend std::ostream& operator<< (std::ostream& out, dbg a ){
        out << "DEBUG MSG: " << a.txt << "\n";
        return out;
    }
    virtual ~dbg(){
        delete [] txt;
        txt = nullptr;
    }
};


int main(){
    auto start = std::chrono::high_resolution_clock::now();
            std::cout << dbg("jakis inny text");
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << "\n";

    start = std::chrono::high_resolution_clock::now();
        std::string x = "jakis text";
        std::string y = "DEBUG MSG: ";
            std::cout << y << x << "\n";
    end = std::chrono::high_resolution_clock::now();
    std::cout << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << "\n";

    return 0;
}