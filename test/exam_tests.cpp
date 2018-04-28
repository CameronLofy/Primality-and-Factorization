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
    std::vector<long> compare = std::vector<long>({2, 2, 5, 5});
    EXPECT_FALSE(obj1.isPrime(100));
    EXPECT_EQ(obj2.get_prime_factors(100), compare);
}