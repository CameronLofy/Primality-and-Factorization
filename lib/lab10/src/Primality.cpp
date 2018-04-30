//
// Created by Jackson Truong on 4/20/18.
//
#include <vector>
#include <cmath>
#include "Primality.h"
namespace lab10{
    Primality::Primality(){
        user_input = 0;
        count =0;
    }

    Primality::Primality(long input){       //is this needed?
        user_input = input;
    }

    Primality::~Primality() {
        user_input = 0;
        count =0;
    }

    bool Primality::simple_isPrime(long input){
        if(input == 0 || input == 1){
            return false;
        }
        if(input == 2){
            return true;
        }
        for(int i=2; i<input; i++){
            if(input%i == 0){
                return false;
            }
        }
        return true;
    }

    bool Primality::isPrime(long key){
        long first = 11;
        long last = key/11;
        if(key==2||key==3||key==5||key==7){
            return true;
        }
        if(key==1){
            return false;
        }
        if(key%2==0||key%3==0||key%5==0||key%7==0){
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

    bool Primality::fast_isPrime(long input){
        if(input == 0 || input == 1){
            return false;
        }
        if(input == 2 || input == 3){
            return true;
        }
        for(int i = 2; i <= sqrt(input); i++){
            if(input%i == 0){
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
