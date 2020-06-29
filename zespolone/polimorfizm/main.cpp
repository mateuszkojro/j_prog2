#include <iostream>
#include <vector>

class obj{
protected:
    int id;
    bool pickable;
    
public:
    obj(bool _pickable)
    :pickable(_pickable){}
    virtual void show() = 0;
    int get_id(){return id;};
};
class car : public obj{
protected:
    static int ctr;
    char* type;
public:
    car(char* _type):obj(false),type(_type){obj::id = ctr++;}
    void show(){std::cout << "[Car]\nid: " << id << "\ntype: " << type <<"\n";}
};
int car::ctr = 0;

class wepon : public obj{
protected:
    static int ctr;
    int size, damage;
public:
    wepon(int _size, int _damage):obj(true),size(_size),damage(_damage){obj::id = ctr++;}
    void show(){std::cout << "[Wepon]\nid: " << id << "\nsize: " << size << "\ndamage:" << damage << "\n";}
};
int wepon::ctr = 0;


int main(){

    std::vector<obj*> list;
    list.push_back(new wepon(1,20));
    list.push_back(new car("Audi"));
    list.push_back(new wepon(2,40));
    list.push_back(new wepon(1,10));
    list.push_back(new car("Mercedes"));

    for (auto itr : list){ itr->show(); printf("\n");}
    return 0;
}
