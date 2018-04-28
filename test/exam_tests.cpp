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
    EXPECT_FALSE(isPrime(100));
    EXPECT_EQ("2 2 5 5", get_prime_factors(100));
}