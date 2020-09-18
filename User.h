//
// Created by thomas on 15/09/20.
//

#ifndef LABORATORIO_DI_PROGRAMMAZIONE_USER_H
#define LABORATORIO_DI_PROGRAMMAZIONE_USER_H

#include <iostream>
#include <memory>
#include <list>

class Message;
class Chat;
class User {
public:
    explicit User(std::string name) : name(name) {}

    const std::string &getName() const {
        return name;
    }

    bool operator==(const User& right) const;
    bool operator!=(const User& right) const;

    void createChat(User u);
    void addChat(std::shared_ptr<Chat> newChat);
    void deleteChat(User u);
    void removeChat(std::shared_ptr<Chat> remChat);
    std::shared_ptr<Chat> findChat(User u) const;

    void readMessage(User u, Message& msg);
private:
    std::string name;
    std::list<std::shared_ptr<Chat>> chats;
};


#endif //LABORATORIO_DI_PROGRAMMAZIONE_USER_H
