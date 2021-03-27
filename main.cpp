#include <iostream>
#include "BankAccount.h"
using namespace std;

int main () {
    BankAccount acct;
    int amt;

    int again;
    do{
        int choice = acct.menu();
        switch(choice) {
            case 1:
                cout<<acct.deposit()<<endl;
                break;
            case 2:
                cout<<acct.withdraw()<<endl;
                break;
            case 3: 
                acct.info();
                break;
            case 4:
                 cout<<acct.create()<<endl;
                 break;
            default:
                 break;
        };

        cout<<"Press 1 to perform another operation"<<endl;
        cout<<"Press any key to exit"<<endl;
        cin>>again;
        }while(again == 1);
    return 0;
}