#pragma once

#include "table.h"

template <typename Type> class stats : public table<Type>{
    //stats() : table<Type>(){}

};

template <> class stats <int> : public table<int>{
    public:
        stats() : table<int>(){}
        double avg(){
            int suma = 0;
            for (int i = 0 ; i < this->size_t ; i++){
                suma += tab[i];
            }
            return suma / (double)size_t;
        }
        void sort(){
            bool flag =true;
            int size = size_t;
            //int i = 0;
            while (flag){
                flag = false;
                for (int i = 0; i < size-1 ;i++){
                    if (tab[i] > tab[i+1]){swap(tab[i],tab[i+1]),flag = true;}
                }
                size--;
            }
        }
        double median(){
            stats<int> tmp(tab,size_t);
            tmp.sort();
            if (size_t % 2 == 0){
                return (tmp[size_t / 2] + tmp[(size_t / 2)-1]) / 2;
            }
            else{
                return tmp[int((size_t-1) / 2)];
            }
        }
        int max(){
            int max = tab[0];
            for(int i =0 ; i < size_t ; i++){
                if(tab[i] > max){
                    max = tab[i];
                }
            }
            return max;
        }
        int min(){
            int min = tab[0];
            for(int i =0 ; i < size_t ; i++){
                if(tab[i] < min){
                    min = tab[i];
                }
            }
            return min;
        }

    protected:
    private:
        void swap(int& a, int&b){
            int temp = a;
            a = b;
            b = temp;
        }
};


