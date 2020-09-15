//
// Created by thomas on 15/09/20.
//

#ifndef LABORATORIO_DI_PROGRAMMAZIONE_MESSAGE_H
#define LABORATORIO_DI_PROGRAMMAZIONE_MESSAGE_H

#include <iostream>

class Message {
public:
    Message(std::string s, std::string r, std::string t) :
        sender(s), receiver(r), text(t), isRead(false) {}

    const std::string &getSender() const {
        return sender;
    }

    const std::string &getReceiver() const {
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
    std::string sender;
    std::string receiver;
    std::string text;
    bool isRead;
};


#endif //LABORATORIO_DI_PROGRAMMAZIONE_MESSAGE_H
