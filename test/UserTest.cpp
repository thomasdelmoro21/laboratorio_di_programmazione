//
// Created by thomas on 16/09/20.
//

#include "gtest/gtest.h"
#include "../User.h"
#include "../Chat.h"

TEST(User, constructor) {
    User mario("Mario");
    ASSERT_EQ(mario.getName(), "Mario" );
}

TEST(User, chatMethods) {
    User carlo("Carlo");
    User maria("Maria");
    User claudio("Claudio");
    User andrea("Andrea");
    carlo.createChat(maria);
    carlo.createChat(claudio);
    ASSERT_EQ(carlo.findChat(claudio)->getOtherUser(), claudio);
    ASSERT_EQ(carlo.findChat(maria)->getOtherUser(), maria);
    ASSERT_THROW(carlo.findChat(andrea), std::logic_error);
    carlo.deleteChat(maria);
    ASSERT_THROW(carlo.findChat(maria), std::logic_error);
    Chat cc(carlo, claudio);
    Chat* ptrCC = &cc;
    carlo.removeChat(ptrCC);
    ASSERT_THROW(carlo.findChat(claudio), std::logic_error);
}