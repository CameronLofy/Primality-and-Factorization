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
        user_input = 0;
        count =0;
    }

    bool Primality::isPrime(long key){
        long first = 5;
        long last = key/2;
        if(key==2||key==3){
            return true;
        }
        if(key==1){
            return false;
        }
        if(key%2==0||key%3==0){
            return false;
        }
        while(first <= last)
        {
            if(first * last > key)
            {
                last--;
            }
            else if(first * last < key)
            {
                first+=2;
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
        if(input ==1||input==0){
            return hello;
        }
        hello.push_back(2);
        count++;
        hello.push_back(3); //Isprime tests assume 2/3 aren't prime just to cut complexity.
        count++;
        for(int i=3; i<=input; i+=2){
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
