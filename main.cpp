#include <iostream>
#include "Primality.h"

int main() {
    //std::cout << "Hello, World!" << std::endl;
    lab10::Primality obj1;
    obj1.isPrime(10);
    long user;
    std::cin >> user;
    if(obj1.isPrime(user) == true)
    {
        std::cout << "True";
    }
    else if(obj1.isPrime(user) == false)
    {
        std::cout << "False";
    }
    return 0;
}