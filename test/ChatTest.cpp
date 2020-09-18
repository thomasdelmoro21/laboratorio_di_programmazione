//
// Created by thomas on 15/09/20.
//

#include "gtest/gtest.h"
#include "../Chat.h"

User emma("Emma");
User chiara("Chiara");
User renzo("Renzo");

TEST(Chat, constructor) {
    Chat c(emma, chiara);
    ASSERT_EQ(c.getUser().getName(), "Emma");
    ASSERT_EQ(c.getOtherUser().getName(), "Chiara");
}
TEST(Chat, addMessage) {
    Chat c(emma, chiara);
    Message m(emma, chiara, "ciao");
    c.addMessage(m);
    ASSERT_EQ(m.getSender().getName(), c.getUser().getName());
    ASSERT_EQ(m.getReceiver().getName(), c.getOtherUser().getName());
    Message errMsg(renzo, chiara, "come stai");
    ASSERT_THROW(c.addMessage(errMsg), std::logic_error);
}
TEST(Chat, readMessage) {
    Chat c(emma, chiara);
    Message errMsg(renzo, chiara, "ciao");
    ASSERT_THROW(c.readMessage(errMsg), std::logic_error);
}
TEST(Chat, getUnreadMessages) {
    Chat c(emma, chiara);
    Message msg1(chiara, emma, "ciao");
    Message msg2(chiara, emma, "Come stai?");
    Message msg3(emma, chiara, "bene");
    Message msg4(chiara, emma, "anche io");
    c.addMessage(msg1);
    c.addMessage(msg2);
    c.addMessage(msg3);
    c.addMessage(msg4);
    ASSERT_EQ(c.getUnreadMessages(), 3);
}