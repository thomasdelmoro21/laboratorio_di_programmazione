//
// Created by thomas on 15/09/20.
//

#include "gtest/gtest.h"
#include "../Message.h"

User marco("Marco");
User giulio("Giulio");

TEST(Message, constructor) {
    Message m(marco, giulio, "ciao come stai?");
    ASSERT_EQ(m.getSender().getName(), "Marco");
    ASSERT_EQ(m.getReceiver().getName(), "Giulio");
    ASSERT_EQ(m.getText(), "ciao come stai?");
}

TEST(Message, isRead) {
    Message m(marco, giulio, "ciao come stai?");
    ASSERT_EQ(m.getIsRead(), false);
    m.setIsRead(true);
    ASSERT_EQ(m.getIsRead(), true);
}