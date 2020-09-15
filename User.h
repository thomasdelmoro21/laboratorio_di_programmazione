//
// Created by thomas on 15/09/20.
//

#ifndef LABORATORIO_DI_PROGRAMMAZIONE_USER_H
#define LABORATORIO_DI_PROGRAMMAZIONE_USER_H

#include <iostream>

class User {
public:
    explicit User(std::string name) : name(name) {}

    const std::string &getName() const {
        return name;
    }

    bool operator==(const User& right);
private:
    std::string name;
};


#endif //LABORATORIO_DI_PROGRAMMAZIONE_USER_H
