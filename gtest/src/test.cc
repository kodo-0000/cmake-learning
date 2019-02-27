//
// Created by 李寅斌 on 2019/2/27.
//

#include <gtest/gtest.h>

int add(int a, int b)
{
    return a + b;
}

TEST(test, add)
{
    EXPECT_EQ(add(2, 3), 5);
}