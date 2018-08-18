#include "../inc/bracketsVerification.hpp"
#include "gtest/gtest.h"

TEST(bracketsVerification, balanced) {
  EXPECT_TRUE(bracketsVerification(""));
  EXPECT_TRUE(bracketsVerification("{}"));
  EXPECT_TRUE(bracketsVerification("{}()"));
  EXPECT_TRUE(bracketsVerification("{()}"));
}

TEST(bracketsVerification, inbalanced) {
  EXPECT_FALSE(bracketsVerification("{"));
}
