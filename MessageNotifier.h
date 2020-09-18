//
// Created by thomas on 16/09/20.
//

#ifndef LABORATORIO_DI_PROGRAMMAZIONE_MESSAGENOTIFIER_H
#define LABORATORIO_DI_PROGRAMMAZIONE_MESSAGENOTIFIER_H

#include <memory>
#include "Observer.h"
#include "Subject.h"
#include "Chat.h"

class MessageNotifier : public Observer {
public:
    MessageNotifier(std::shared_ptr<Chat> subject) : subject(subject) {
        attach();
    }
    ~MessageNotifier() {
        detach();
    }

    void attach() override;
    void detach() override;
    void update() override;
    void draw() override;

    std::shared_ptr<Chat> getSubject() const {
        return subject;
    }

    void setSubject(std::shared_ptr<Chat> subject) {
        MessageNotifier::subject = subject;
    }

private:
    std::shared_ptr<Chat> subject;
};


#endif //LABORATORIO_DI_PROGRAMMAZIONE_MESSAGENOTIFIER_H
