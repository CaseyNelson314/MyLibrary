#include <gtest/gtest.h>
#include <MyLibrary/Algorithm/Math.hpp>

TEST(Factorial, HandlesPositiveInput)
{
    EXPECT_EQ(Math::Factorial(1),   1);
    EXPECT_EQ(Math::Factorial(2),   2);
    EXPECT_EQ(Math::Factorial(3),   6);
    EXPECT_EQ(Math::Factorial(4),  24);
    EXPECT_EQ(Math::Factorial(5), 120);
}
