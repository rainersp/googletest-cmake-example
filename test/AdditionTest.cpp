#include <gtest/gtest.h>

#include "Addition.h"

class AdditionTest : public ::testing::Test
{
    virtual void SetUp() {}
    virtual void TearDown() {}

};

TEST_F(AdditionTest, twoValues)
{
    const int x = 2;
    const int y = 3;
    Addition addition;
    EXPECT_EQ(5, addition.twoValues(x, y));
    EXPECT_EQ(10, addition.twoValues(5, 5));
}

