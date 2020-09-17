//
// Created by thomas on 15/09/20.
//

#ifndef LABORATORIO_DI_PROGRAMMAZIONE_USER_H
#define LABORATORIO_DI_PROGRAMMAZIONE_USER_H

#include <iostream>
#include <memory>
#include <list>

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
    void addChat(Chat* newChat);
    void deleteChat(User u);
    void removeChat(Chat* remChat);
    Chat* findChat(User u) const;

private:
    std::string name;
    std::list<Chat*> chats;
};


#endif //LABORATORIO_DI_PROGRAMMAZIONE_USER_H
