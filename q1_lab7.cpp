#include<iostream>
using namespace std;

class Vehicle                // base class
{
  public:
    Vehicle()
    {
      cout << "This is a motor Vehicle which is mine" << endl;
    }
    void display()
    {
        cout<<"Roll no 1928265"<<endl;
    }
};
class FourWheeler
{
  public:
    FourWheeler()
    {
      cout << "This is a 4 wheeler." << endl;
    }
    void display()
    {
        int a=6,b=4;
        int c=a*b;
        cout<<"result:"<<c<<endl;
    }
};

// sub class derived from two base classes
class Car: public Vehicle, public FourWheeler
{
   public :
      void display()
      {
          cout<<"Name:-Sourav Pandey"<<endl;
      }
};

// main function
int main()
{
    // creating object of sub class will
    // invoke the constructor of base classes
    Car obj;
    obj.FourWheeler::display();
    obj.Vehicle::display();
    obj.display();
    return 0;
}
