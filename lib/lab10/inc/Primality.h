//
// Created by Jackson Truong on 4/20/18.
//
#ifndef LAB10_PRIMALITY_H
#define LAB10_PRIMALITY_H
#include <string>
#include <cmath>
#include <iostream>
#include <vector>

namespace lab10{
    class Primality {
        long user_input;
        int count;
    public:
        Primality();
        Primality(long input);
        ~Primality();
        bool isPrime(long key);
        bool test_isPrime(long input);
        std::vector<long> showprime(long input);
        int getcount();


    };


}






#endif //LAB10_PRIMALITY_H
