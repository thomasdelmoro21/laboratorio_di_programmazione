//
// Created by thomas on 15/09/20.
//

#ifndef LABORATORIO_DI_PROGRAMMAZIONE_MESSAGE_H
#define LABORATORIO_DI_PROGRAMMAZIONE_MESSAGE_H

#include <iostream>
#include "User.h"

class Message {
public:
    Message(User s, User r, std::string t) :
        sender(s), receiver(r), text(t), isRead(false) {}

    const User &getSender() const {
        return sender;
    }

    const User &getReceiver() const {
        return receiver;
    }

    const std::string &getText() const {
        return text;
    }

    bool getIsRead() const {
        return isRead;
    }

    void setIsRead(bool read) {
        isRead = read;
    }

private:
    User sender;
    User receiver;
    std::string text;
    bool isRead;
};


#endif //LABORATORIO_DI_PROGRAMMAZIONE_MESSAGE_H
