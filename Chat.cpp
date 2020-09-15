//
// Created by thomas on 15/09/20.
//

#include "Chat.h"

void Chat::subscribe(Observer *o) {
    observers.push_back(o);
}
void Chat::unsubscribe(Observer *o) {
    observers.remove(o);
}
void Chat::notify() {
    for (auto i : observers)
        i->update();
}

void Chat::addMessage(const Message &newMsg) {
    if((user==newMsg.getSender() && otherUser==newMsg.getReceiver()) ||
       (user==newMsg.getReceiver() && otherUser==newMsg.getSender()))
        messages.push_back(newMsg);
    if (user == newMsg.getReceiver())
        notify();
}
