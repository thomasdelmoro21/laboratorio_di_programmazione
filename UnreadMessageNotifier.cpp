//
// Created by thomas on 18/09/20.
//

#include "UnreadMessageNotifier.h"

void UnreadMessageNotifier::attach() {
    subject->subscribe(this);
}

void UnreadMessageNotifier::detach() {
    subject->unsubscribe(this);
}

void UnreadMessageNotifier::update() {
    draw();
}

void UnreadMessageNotifier::draw() {
    int unreadMessages = subject->getUnreadMessages();
    std::cout << subject->getName() << ": Hai " << unreadMessages << " messaggi non letti" << std::endl;
}