//
// Created by thomas on 15/09/20.
//

#ifndef LABORATORIO_DI_PROGRAMMAZIONE_CHAT_H
#define LABORATORIO_DI_PROGRAMMAZIONE_CHAT_H

#include <iostream>
#include <list>
#include <vector>
#include "Subject.h"
#include "Message.h"
#include "User.h"

class Chat : public Subject {
public:
    Chat(User u, User ou) : user(u), otherUser(ou) {}

    void subscribe(Observer* o) override;
    void unsubscribe(Observer* o) override;
    void notify() override;

    void addMessage(const Message& newMsg);
private:
    std::list<Observer*> observers;
    std::vector<Message> messages;
    User user;
    User otherUser;
};


#endif //LABORATORIO_DI_PROGRAMMAZIONE_CHAT_H
