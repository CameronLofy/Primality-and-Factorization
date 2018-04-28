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
    lab10::Factorization obj2;
    std::vector<long> compare = std::vector<long>({2, 2, 5, 5});
    std::vector<long> compare2 = std::vector<long>({17, 53});
    EXPECT_EQ(obj2.get_prime_factors(901), compare2);
    EXPECT_EQ(obj2.get_prime_factors(100), compare);
}

TEST(prime_factorization, Primality) {
    lab10::Primality obj1;
    EXPECT_FALSE(obj1.isPrime(100));
    EXPECT_FALSE(obj1.isPrime(200));
    EXPECT_FALSE(obj1.isPrime(300));
    EXPECT_FALSE(obj1.isPrime(400));
    EXPECT_FALSE(obj1.isPrime(500));
    EXPECT_FALSE(obj1.isPrime(600));
    EXPECT_FALSE(obj1.isPrime(700));
    EXPECT_FALSE(obj1.isPrime(800));
    EXPECT_TRUE(obj1.isPrime(306329));
}

TEST(prime_factorization, showprimes){
    lab10::Primality obj1;
    std::vector<long> compare = std::vector<long>({2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97});
    EXPECT_EQ(obj1.showprime(100), compare);
    EXPECT_EQ(25, obj1.getcount());
}

TEST(prime_factorization, PrimalityBig){
    lab10::Primality obj1;
    EXPECT_TRUE(obj1. isPrime(-2147483647));
    EXPECT_TRUE(obj1. isPrime(2147483647));

}

TEST(prime_factorization, primesmallaf){
    lab10::Primality obj1;
    EXPECT_FALSE(obj1.isPrime(0));
    EXPECT_FALSE(obj1.isPrime(1));
    EXPECT_TRUE(obj1.isPrime(2));
    EXPECT_TRUE(obj1.isPrime(3));

}
