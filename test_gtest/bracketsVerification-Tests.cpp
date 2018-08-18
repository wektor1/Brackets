#include "../inc/bracketsVerification.hpp"
#include "gtest/gtest.h"

TEST(bracketsVerification, balanced) {

}

TEST(bracketsVerification, inbalanced) {
    EXPECT_FALSE(bracketsVerification("{"));
}
