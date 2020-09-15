//
// Created by thomas on 15/09/20.
//

#include "gtest/gtest.h"
#include "../Message.h"

TEST(Message, constructor) {
    Message m("Marco", "Giulio", "ciao come stai?");
    ASSERT_EQ(m.getSender(), "Marco");
    ASSERT_EQ(m.getReceiver(), "Giulio");
    ASSERT_EQ(m.getText(), "ciao come stai?");
}

TEST(Message, isRead) {
    Message m("Marco", "Giulio", "ciao come stai?");
    ASSERT_EQ(m.getIsRead(), false);
    m.setIsRead(true);
    ASSERT_EQ(m.getIsRead(), true);
}