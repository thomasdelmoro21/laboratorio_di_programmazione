//
// Created by thomas on 15/09/20.
//

#include "User.h"

bool User::operator==(const User &right) {
    bool result = false;
    if(name == right.name)
        result = true;
    return result;
}
