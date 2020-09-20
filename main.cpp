#include <iostream>
#include "User.h"
#include "Chat.h"
#include "Message.h"
#include "MessageNotifier.h"
#include "UnreadMessageNotifier.h"

int main() {
    User antonio("Antonio");
    User gianni("Gianni");
    User paola("Paola");
    User* ptrA = &antonio;
    User* ptrG = &gianni;
    User* ptrP = &paola;

    std::shared_ptr<Chat> ptrAG = std::make_shared<Chat>(antonio, gianni);
    std::shared_ptr<Chat> ptrAP = std::make_shared<Chat>(antonio, paola);

    MessageNotifier notifierAG(ptrAG);
    MessageNotifier notifierAP(ptrAP);
    UnreadMessageNotifier unreadA(ptrA);
    UnreadMessageNotifier unreadG(ptrG);
    UnreadMessageNotifier unreadP(ptrP);

    Message msg1(antonio, gianni, "ciao");
    Message msg2(paola, antonio, "come stai?");
    Message msg3(paola, antonio, "spero bene");
    Message msg4(gianni, antonio, "buonasera");

    ptrAG->addMessage(msg1);  //nessuna notifica
    ptrAP->addMessage(msg2);  //notifica da Paola
    ptrAP->addMessage(msg3);  //notifica da Paola
    ptrAG->addMessage(msg4);  //notifica da Gianni

    antonio.addChat(ptrAG);
    antonio.addChat(ptrAP);

}
