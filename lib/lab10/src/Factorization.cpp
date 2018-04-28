//
// Created by Jackson Truong on 4/20/18.
//
#include <vector>
#include "Factorization.h"
namespace lab10{            //TODO:: make prime number results into vector class?

    std::vector get_prime_numbers(long input){
        std::vector prime;
        while(input%2 == 0){    //divides by two until result is an odd number
            prime.push_back(2); //inserts all prime 2s into vector
            input = input/2;
        }

        //need to check for all other multiples of prime numbers
        for(long i=0; i<input; i++){    //checks every number until the input for divisibility
            while(input%i ==0){         //if number is divisible
                prime.push_back(i);     //push divisible number into vector
                input = input/i;        //divides input by divisible number
            }
        }
        return prime;
    }
}
