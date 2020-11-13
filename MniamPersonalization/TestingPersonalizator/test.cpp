#include "pch.h"
#include "../Personalizator/sum.h"

TEST(SumTest, PositiveSum) {
	ASSERT_EQ(sum(1, 5), 6);
}

TEST(SumTest, NegativeSum) {
	ASSERT_EQ(sum(-6, 2), -4);
}

TEST(SumTest, ZeroSum) {
	ASSERT_EQ(sum(-2, 1), 0);
}