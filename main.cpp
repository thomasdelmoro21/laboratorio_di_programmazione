#include <iostream>
#include "User.h"
#include "Chat.h"
#include "Message.h"
#include "MessageNotifier.h"

int main() {
    User antonio("Antonio");
    User gianni("Gianni");
    User paola("Paola");
    antonio.createChat(gianni);
    gianni.createChat(antonio);
    antonio.createChat(paola);
    paola.createChat(antonio);
    Chat ag(antonio, gianni);
    Chat ap(antonio, paola);
    Chat* ptrAG = &ag;
    Chat* ptrAP = &ap;
    MessageNotifier notifierAG(ptrAG);
    MessageNotifier notifierAP(ptrAP);
    Message msg1(antonio, gianni, "ciao");
    Message msg2(paola, antonio, "come stai");
    ag.addMessage(msg1);  //nessuna notifica
    ap.addMessage(msg2);  //notifica da Paola
    antonio.readMessage(paola, msg2);
}
