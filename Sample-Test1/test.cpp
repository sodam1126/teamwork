#include "gtest/gtest.h"
#include "../teamwork/Calc.cpp"

TEST(TestCaseName, TestName) {
	Calc c;
	int ret = c.getSum(1, 1);
	EXPECT_EQ(2, ret);
}