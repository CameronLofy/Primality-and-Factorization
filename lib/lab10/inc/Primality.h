//
// Created by Jackson Truong on 4/20/18.
//
#ifndef LAB10_PRIMALITY_H
#define LAB10_PRIMALITY_H
#include <string>
#include <cmath>
#include <iostream>

namespace lab10{
    class Primality {
        long user_input;
    public:
        Primality();
        Primality(long input);
        ~Primality();
        bool isPrime(long key);


    };


}






#endif //LAB10_PRIMALITY_H
