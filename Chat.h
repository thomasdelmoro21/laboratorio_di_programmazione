//
// Created by thomas on 15/09/20.
//

#ifndef LABORATORIO_DI_PROGRAMMAZIONE_CHAT_H
#define LABORATORIO_DI_PROGRAMMAZIONE_CHAT_H

#include <iostream>
#include <list>
#include <vector>
#include "Subject.h"
#include "User.h"
#include "Message.h"

class Chat : public Subject {
public:
    Chat(User firstUser, User secondUser) : user(firstUser), otherUser(secondUser) {}

    const User &getUser() const {
        return user;
    }

    const User &getOtherUser() const {
        return otherUser;
    }

    void subscribe(Observer* o) override;
    void unsubscribe(Observer* o) override;
    void notify() override;

    void addMessage(const Message& newMsg);
    void readMessage(Message& msg);
private:
    std::list<Observer*> observers;
    std::vector<Message> messages;
    User user;
    User otherUser;
};


#endif //LABORATORIO_DI_PROGRAMMAZIONE_CHAT_H
