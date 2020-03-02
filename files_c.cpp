#include <iostream>
#include <stdio.h>

struct data{
  int num;
  char tab[10] = {'a','b','c','d'};
  float point;
};

void save_bin(FILE *ptr,data a);
void save_txt(FILE *ptr,data a);
void read_bin(FILE *ptr,data a);
void read_txt(FILE *ptr,data a);

int main(){

data a;

a.num = 100;
a.point = 0.4;

FILE *ptr_bin_s = fopen("./dane.bin","wb");
save_bin(ptr_bin_s, a);
fclose(ptr_bin_s);

a.num = 0;
a.tab[0] = '\0';
a.point = 0;

FILE *ptr_bin_r = fopen("./dane.bin","rb");
read_bin(ptr_bin_r,a);
fclose(ptr_bin_r);


a.num = 100;
a.tab[0] = 'a';
a.point = 0.4;

FILE *ptr_txt_s = fopen("./dane.txt","wt");
save_txt(ptr_txt_s,a);
fclose(ptr_txt_s);

a.num = 0;
a.tab[0] = '\0';
a.point = 0;

FILE *ptr_txt_r = fopen("./dane.txt","rt");
read_txt(ptr_txt_r,a);
fclose(ptr_txt_r);

}

void save_bin(FILE *ptr,data a){
  fwrite(&a, sizeof(data), 1, ptr);
}
void read_bin(FILE *ptr,data a){
  fread(&a, sizeof(data), 1, ptr);
  printf("%d\t%s\t%f\n",a.num,a.tab,a.point);
}

void save_txt(FILE *ptr,data a){
  fprintf(ptr, "%d\t%s\t%f\n",a.num,a.tab,a.point);
}
void read_txt(FILE *ptr,data a){
  fscanf(ptr, "%d %s %f ",&a.num,a.tab,&a.point);
  printf("%d\t%s\t%f\n",a.num,a.tab,a.point);
}
