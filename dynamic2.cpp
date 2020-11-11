#include<iostream>
using namespace std;

class employee{
    protected:
        string name;
        int id;
        //float salary;
    public:
        virtual void getDetails(){
            cout<<"Enter name: ";cin>>name;
            cout<<"Enter id: ";cin>>id;
            //cout<<"Enter salary: ";cin>>salary;
        }
        virtual void calculateTotal()=0;
};
class regular:public employee{
        float da;
        float hra;
        float basic;
    public: 
        regular(){
            cout<<"Regular Employee -\n";
        }
        void calculateTotal(){
            float total=da+hra+basic;
            cout<<"Total: "<<total<<endl;
        }
        void getDetails(){
            employee::getDetails();
            cout<<"Enter basic: ";cin>>basic;
            da=0.2*basic;
            hra=0.15*basic;
        }
};
class partTime:public employee{
        float pay;
        int hrs;
    public:
        partTime(){
            cout<<"Part-time Employee -\n";
        }
        void calculateTotal(){
            float total=hrs*pay;
            cout<<"Total: "<<total<<endl;
        }
        void getDetails(){            
            employee::getDetails();
            cout<<"Enter pay per hour: ";cin>>pay;
            cout<<"Enter hours: ";cin>>hrs;
        }
};

int main(){
    /*
    partTime p;
    p.getDetails();
    p.calculateTotal();
    regular r;
    r.getDetails();
    r.calculateTotal();
    return 0;
    */
    employee *e;
    partTime p;
    e=&p;
    e->getDetails();
    e->calculateTotal();
    regular r;
    e=&r;
    e->getDetails();
    e->calculateTotal();
    return 0;
}