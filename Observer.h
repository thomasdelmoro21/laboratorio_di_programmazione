//
// Created by thomas on 15/09/20.
//

#ifndef LABORATORIO_DI_PROGRAMMAZIONE_OBSERVER_H
#define LABORATORIO_DI_PROGRAMMAZIONE_OBSERVER_H


class Observer {
public:
    virtual ~Observer() {}
    virtual void attach() = 0;
    virtual void detach() = 0;
    virtual void update() = 0;
    virtual void draw() = 0;
};


#endif //LABORATORIO_DI_PROGRAMMAZIONE_OBSERVER_H
