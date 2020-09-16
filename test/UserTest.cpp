//
// Created by thomas on 16/09/20.
//

#include "gtest/gtest.h"
#include "../User.h"

TEST(User, constructor) {
    User testUser("Mario");
    ASSERT_EQ(testUser.getName(), "Mario" );
}