#include "gtest/gtest.h"
#include "Factorization.h"
#include "Primality.h"

class prime_factorization : public testing::Test {

protected:
    virtual void TearDown(){

    }

    virtual void SetUp(){

    }

public:

};

TEST(prime_factorization, Prime) {
    lab10::Primality long key;
    key = 1000;
    lab10::Factorization long input = 1000;
EXPECT_EQ(false, isPrime(key));
EXPECT_FALSE(isPrime(key));

}
TEST(prime_factorization, Prime_Factorization_small){
    long key = 1000;
    EXPECT_EQ(false, isPrime(key));
    EXPECT_FALSE(isPrime(key));
    EXPECT_EQ("2 2 5 5", get_prime_factors(key));
}