//
// Created by Jackson Truong on 4/20/18.
//

#include "Primality.h"
namespace lab10{
    Primality::Primality(){
        user_input = 0;
    }

    Primality::Primality(long input){
        user_input = input;
    }

    Primality::~Primality() {

    }

    bool Primality::isPrime(long key){
        long first = 2;
        long last = key/2;
        while(first <= last)
        {
            if(first * last > key)
            {
                last--;
            }
            else if(first * last < key)
            {
                first++;
            }
            else if(first * last == key)
            {
                return false;
            }
        }
        return true;
    }
}
