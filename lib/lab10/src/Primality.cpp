//
// Created by Jackson Truong on 4/20/18.
//
#include <vector>
#include "Primality.h"
namespace lab10{
    Primality::Primality(){
        user_input = 0;
        count =0;
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

    std::vector<long> Primality::showprime(long input){
        std::vector<long> hello;
        for(int i=2; i<=input; i++){
            if(isPrime(i)){
                hello.push_back(i);
                count++;
            }
        }
        return hello;
    }

    int Primality::getcount(){
        return count;
    }


}
