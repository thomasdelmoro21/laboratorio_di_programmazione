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
    Chat* c = new Chat(*this, u);
    std::shared_ptr<Chat> newChat = std::make_shared<Chat>(*c);
    this->addChat(newChat);
}

void User::addChat(std::shared_ptr<Chat> newChat) {
    chats.push_back(newChat);
}

void User::deleteChat(User u) {
    chats.remove(findChat(u));
}

void User::removeChat(std::shared_ptr<Chat> remChat) {
    deleteChat(remChat->getOtherUser());
}

std::shared_ptr<Chat> User::findChat(User u) const {
    for (auto i : chats) {
        if (i->getOtherUser() == u)
            return i;
    }
    throw std::logic_error("Chat non trovata");
}

void User::readMessage(User u, Message& msg) {
    std::shared_ptr<Chat> msgChat = findChat(u);
    msgChat->readMessage(msg);
}