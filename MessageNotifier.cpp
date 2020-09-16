//
// Created by thomas on 16/09/20.
//

#include <iostream>
#include "MessageNotifier.h"

void MessageNotifier::attach() {
    subject->subscribe(this);
}

void MessageNotifier::detach() {
    subject->unsubscribe(this);
}

void MessageNotifier::update() {
    draw();
}

void MessageNotifier::draw() {
    std::cout << "Hai un nuovo messaggio da " << subject->getOtherUser().getName()
        << std::endl;
}
