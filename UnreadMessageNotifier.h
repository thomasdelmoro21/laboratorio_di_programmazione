//
// Created by thomas on 18/09/20.
//

#ifndef LABORATORIO_DI_PROGRAMMAZIONE_UNREADMESSAGENOTIFIER_H
#define LABORATORIO_DI_PROGRAMMAZIONE_UNREADMESSAGENOTIFIER_H

#include "Observer.h"
#include "User.h"

class UnreadMessageNotifier : public Observer {
public:
    UnreadMessageNotifier(User* subject) : subject(subject) {
        attach();
    }

    virtual ~UnreadMessageNotifier() {
        detach();
    }

    void attach() override;
    void detach() override;
    void update() override;
    void draw() override;
private:
    User* subject;
};


#endif //LABORATORIO_DI_PROGRAMMAZIONE_UNREADMESSAGENOTIFIER_H
