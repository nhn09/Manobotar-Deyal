#ifndef DONER_H
#define DONER_H
#include "Person.h"
#include"Functions.h"
void startMenu();

class Doner:public Person
{
    public:
        Doner();
        static long int stDonerID;
        void signIn();
        void Doner_StoreInFile();
        void displayProfile();
        void Doner_DisplayAll();
        void Menu();
        void submenu();
        void productMenu();
        void setDonerID(int ID)
        {
            donerID=ID;
        }
        long int getDonerID()
        {
            return donerID;
        }
    protected:

    private:
        long int donerID;
};

#endif // DONER_H
