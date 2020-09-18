//
// Created by thomas on 15/09/20.
//

#ifndef LABORATORIO_DI_PROGRAMMAZIONE_SUBJECT_H
#define LABORATORIO_DI_PROGRAMMAZIONE_SUBJECT_H

#include "Observer.h"

class Subject {
public:
    virtual ~Subject() = default;
    virtual void subscribe(Observer* o) = 0;
    virtual void unsubscribe(Observer* o) = 0;
    virtual void notify() = 0;
};


#endif //LABORATORIO_DI_PROGRAMMAZIONE_SUBJECT_H
