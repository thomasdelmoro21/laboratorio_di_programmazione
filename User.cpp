//
// Created by thomas on 15/09/20.
//

#include "User.h"
#include "Chat.h"

bool User::operator==(const User &right) const {
    bool result = false;
    if(name == right.name)
        result = true;
    return result;
}

bool User::operator!=(const User &right) const {
    if(!(*this==right))
        return true;
    else
        return false;
}

void User::createChat(User u) {
    Chat* newChat = new Chat(*this, u);
    this->addChat(newChat);
}

void User::addChat(Chat *newChat) {
    chats.push_back(newChat);
}

void User::deleteChat(User u) {
    chats.remove(findChat(u));
}

void User::removeChat(Chat *remChat) {
    deleteChat(remChat->getOtherUser());
}

Chat* User::findChat(User u) const {
    for (auto i : chats) {
        if (i->getOtherUser() == u)
            return i;
    }
    throw std::out_of_range("Chat non trovata");
}