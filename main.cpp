#include <iostream>
#include <Factorization.h>
#include "Primality.h"
#include <vector>
int main() {
    //std::cout << "Hello, World!" << std::endl;
//    lab10::Primality obj1;
//    obj1.isPrime(10);
//    long user;
//    std::cin >> user;
//    if(obj1.isPrime(user) == true)
//    {
//        std::cout << "True";
//    }
//    else if(obj1.isPrime(user) == false)
//    {
//        std::cout << "False";
//    }
//

    lab10::Factorization obj2;
    lab10::Primality obj4;
    obj2.print(obj2.get_prime_factors(10000));
    obj4.primeprint(obj4.showprime(10000));


    return 0;
}