#pragma once

#include <exception>

class my_exc : public std::exception{
public:
char msg[100];
my_exc(const char* _msg){
    for (int i = 0 ; i < 100 ;i++){
    msg[i] = _msg[i];
    }
}

virtual const char* what() const throw()
  {
    return msg;
  }

};
