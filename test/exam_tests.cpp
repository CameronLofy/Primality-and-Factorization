#include "gtest/gtest.h"
#include "Factorization.h"

class prime_factorization : public testing::Test {

protected:
    virtual void TearDown(){

    }

    virtual void SetUp(){

    }

public:

};

TEST(prime_factorization, Prime_Factorization_small){
    lab10::Primality obj1;
    lab10::Factorization obj2;
    std::vector<long> obj3;
    EXPECT_FALSE(obj1.isPrime(100));
    obj3 = obj2.get_prime_factors(100);
    EXPECT_EQ("2 2 5 5", obj2.print(obj3));
}