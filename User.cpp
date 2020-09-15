//
// Created by thomas on 15/09/20.
//

#include "User.h"

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
