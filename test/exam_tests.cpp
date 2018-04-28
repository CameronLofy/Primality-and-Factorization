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
    EXPECT_FALSE(obj1.isPrime(1000));
    //EXPECT_EQ("2 2 5 5", get_prime_numbers(1000));
}