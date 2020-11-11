#include<iostream>
using namespace std;

class account{
    protected:
        string name;
        int accno;
        float balance;
    public:
        virtual void getDetails(){
            cout<<"Enter name: ";cin>>name;
            cout<<"Enter acc. no.: ";cin>>accno;
            cout<<"Enter balance: ";cin>>balance;
        }
        void displayBalance(){
            cout<<"Balance: "<<balance<<endl;
        }
        virtual void deposit()=0;
        virtual void withdraw()=0;
};
class savings:public account{
        float minbal;
    public: 
        savings(){
            cout<<"Savings account -\n";
        }
        void getDetails(){
            account::getDetails();
            cout<<"Enter Min bal : ";cin>>minbal;
        }
        void deposit(){
            float amt;
            cout<<"Enter Deposit Amt: ";cin>>amt;
            balance+=amt;
            displayBalance();
        }
        void withdraw(){
            float amt;
            cout<<"Enter Withdraw Amt: ";cin>>amt;
            if((balance-amt)>minbal) {
                balance-=amt;
                cout<<"Transaction Successfull.\n";
            }
            else{
                cout<<"Insufficient Balance.\n";
            }
            displayBalance();
        }
};
class current:public account{
        float overdue=0;
    public:
        current(){
            cout<<"Current account -\n";
        }
        void deposit(){
            float amt;
            cout<<"Enter Deposit Amt: ";cin>>amt;
            balance+=amt;
            if(overdue!=0){
                overdue-=balance;
                if(overdue==0) balance=0;
                else if(overdue>0) balance=0;
                else balance-=overdue;
            }
            displayBalance();
        }
        void withdraw(){
            float amt;
            cout<<"Enter Withdraw Amt: ";cin>>amt;
            if(balance>amt) {
                balance-=amt;
                cout<<"Transaction Successfull.\n";
            }
            else{
                balance-=amt;
                overdue-=balance;
                balance=0;
                cout<<"Transaction Successfull.\nOverDue Amt: "<<overdue<<endl;
            }
            displayBalance();
            cout<<"OverDue Amt: "<<overdue<<endl;
            
        }
};

int main(){
    account *a;
    savings s;a=&s;
    a->getDetails();
    a->deposit();
    a->withdraw();
    
    current c;a=&c;
    a->getDetails();
    a->deposit();
    a->withdraw();
    
    return 0;
}