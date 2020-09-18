//
// Created by thomas on 18/09/20.
//

#include "gtest/gtest.h"
#include "../UnreadMessageNotifier.h"
#include "../Chat.h"

TEST(UnreadMessageNotifier, draw) {
    User emma("Emma");
    User chiara("Chiara");
    User carlo("Carlo");
    Chat b(emma, carlo);
    Chat c(emma, chiara);
    std::shared_ptr<Chat> ptrB = std::make_shared<Chat>(b);
    std::shared_ptr<Chat> ptrC = std::make_shared<Chat>(c);
    Message msg1(chiara, emma, "ciao");
    Message msg2(chiara, emma, "Come stai?");
    Message msg3(emma, chiara, "bene");
    Message msg4(carlo, emma, "ciaoo");
    emma.addChat(ptrB);
    emma.addChat(ptrC);
    ptrC->addMessage(msg1);
    ptrC->addMessage(msg2);
    ptrC->addMessage(msg3);
    ptrB->addMessage(msg4);
    ASSERT_EQ(emma.getUnreadMessages(), 3);
}