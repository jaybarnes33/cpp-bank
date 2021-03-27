#include <iostream>
using namespace std;

class BankAccount {


    private:

    string accountName;
    string accountNumber;
    double balance;

    public: 
    BankAccount () {
      balance =0;
    };

    int menu () {
        int choice;
        cout<<"Welcome to Pro Bank"<<endl;
        cout<<"*******************"<<endl;
        cout<<endl;
        cout<<"Press 1 to make a deposit"<<endl;
        cout<<"Press 2 to make a withdrawal"<<endl;
        cout<<"Press 3 to check account balance"<<endl;
        cout<<"Press 4 to create account"<<endl;
        cin>>choice;

        return choice;
    };
    
    string deposit () {
        double amt;
         if(accountName.empty() || accountNumber.empty()){
            cout<<"Please create an account first"<<endl;
        }else{
            cout<<"Enter amount to deposit"<<endl;
            cin>>amt;
            return "You have successfully deposited GH " + to_string(amt) + " Your current balance is " + to_string(balance);
        };
       
    };

    string withdraw () {
        double amt;
         if(accountName.empty() || accountNumber.empty()){
            cout<<"Please create an account first"<<endl;
        }else{
            cout<<"Enter amount to deposit"<<endl;
            cin>>amt;
             if(amt > balance){
            return "Insufficient balance";
            }else{
            balance-=amt;
            return "You have succesfully withdrawn GH" + to_string(amt);
            };
        };
     };
    void info () {
        if(accountName.empty() || accountNumber.empty()){
            cout<<"Please create an account first"<<endl;
        }else{
        cout<<" Welcome "<<accountName<<endl;
        cout<<"Your accout number is "<<accountNumber<<endl;
        cout<<"You have " + to_string(balance)<<"GHC in your account"<<endl;
        };
        
    };
    string create  () {
       cout<<"Enter name"<<endl;
       getline(cin,accountName);
      cout<<"Created"<<endl;
    };
};