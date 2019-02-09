#include "gtest/gtest.h"
#include "example.h"

TEST(example, multiply)
{
    double res;
    res = multiply_numbers(10.0, 2.0);
    ASSERT_NEAR(res, 20.0, 1.0e-11);
}
