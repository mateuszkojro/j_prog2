#include <iostream>

class book{
public:
  char name[20];
  char author[20];
  int isbn;
  book();
  void set();
  void show();


  ~book(){
    //destruktor
    //np czyszczenie pamieci przydzielonej dynamicznie
  }
private:
};

int main(){
  book ksiazka;

  ksiazka.set();
  ksiazka.show();
  return 0;
};


book::book(){

  //konstruktor
  //uruchomiony przy deklaracji obiektu klasy

  name[0] = '\0';
  author[0] = '\0';
  isbn = 0;

}

void book::set(){

  printf("podaj nazwe autora isbn\n");
  scanf("%s %s %d",name,author,&isbn);

}

void book::show(){
  printf("Name: %s\nauthor: %s\nISBN: %d\n",name,author,isbn);
}
