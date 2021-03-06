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
    else
        throw std::logic_error("Il messaggio non appartiene a questa chat");
    if (user == newMsg.getReceiver()) {
        notify();
    }
}

void Chat::readMessage(Message &msg) {
    if((msg.getSender() != user && msg.getSender()!= otherUser) || msg.getReceiver()!=
            user && msg.getReceiver() != otherUser)
        throw std::logic_error("Il messaggio non fa parte di questa chat");
    else {
        std::cout << "Messaggio da " << msg.getSender().getName() << " a "
            << msg.getReceiver().getName() << ": " << std::endl;
        std::cout << msg.getText() << std::endl;
        msg.setIsRead(true);
    }
}

int Chat::getUnreadMessages() const {
    int unreadMessages = 0;
    for (auto i : messages) {
        if (user == i.getReceiver() && !i.getIsRead())
            unreadMessages++;
    }
    return unreadMessages;
}
