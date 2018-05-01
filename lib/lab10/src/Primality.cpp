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

    Primality::Primality(long input){
        user_input = input;
    }

    Primality::~Primality() {
        user_input = 0;
        count =0;
    }

    //the simplest but slowest prime check method
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

    //A fast method
    bool Primality::isPrime(long key){
        long first = 11;                        //already check for prime divisibility up to 11
        long last = key/11;                     //so we can skip to 11 and end with input/11
        if(key==2||key==3||key==5||key==7){
            return true;
        }
        if(key==1){
            return false;
        }
        if(key%2==0||key%3==0||key%5==0||key%7==0){     //checking whether the input is divisible by the
            return false;                               //first 4 primes to increase speed with larger number
        }
        while(first <= last)    //similar to twoSum, goes until it finds one example of factors
        {
            if(first * last > key)
            {
                last--;
            }
            else if(first * last < key)
            {
                first+=2; // This increments through odd numbers to cut through complexity, 2 is the only even prime #
            }
            else if(first * last == key)
            {
                return false;
            }
        }
        return true;
    }

    //the faster prime check method
    bool Primality::fast_isPrime(long input){
        if(input == 0 || input == 1){   //edge cases for 1 and 0
            return false;
        }
        if(input == 2 || input == 3){   //edge cases for 2 and 3
            return true;
        }
        for(int i = 2; i <= sqrt(input); i++){      //no need to check up until input
            if(input%i == 0){                       //can stop at the square root of input
                return false;
            }
        }
        return true;
    }

    std::vector<long> Primality::showprime(long input){ //Shows the amount pf prime numbers until the input is reached
        std::vector<long> hello;
        if(input ==1||input==0){ //Edge cases, these are not prime numbers but they are very small numbers
            return hello;
        }
        hello.push_back(2); //Automatically pushes 2, basically the third edge case if input = 2. It will not enter the for loop
        count++;

        for(int i=3; i<=input; i+=2){ //Starts at 3 and goes through odd numbers because even numbers are always not prime
            if(isPrime(i)){// This uses the isPrime function so it will add complexity
                hello.push_back(i);
                count++;
            }
        }
        return hello;
    }

    int Primality::getcount(){ // Returns a count of how many prime numbers are within the showprime input
        return count;
    }


}
