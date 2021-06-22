#include<iostream>
using namespace std;
class time
{
      int x, y;
   public:
      time()
      {
          cout<<"Default constructor invoked \n";
          x=15;
          y=34;
      }
      time(int a,int b=0)
      {
          cout<<"Parameterised constructor has been invoked: "<<endl;
          x=a;
          y=b;
          while(y>=60)
          {
              x++;
              y=y-60;
          }
      }
      time(time &p)
      {
          cout<<"Copy constructor has been invoked: "<<endl;
          x=p.x;
          y=p.y;
      }
      ~time()
      {
          cout<<"\n Destructor invoked.";
      }
      void display()
      {
          cout<<"Time in HH:MM format is : "<<endl;
          if(x<10)
            cout<<"0"<<x<<":";
          else
            cout<<x<<":";
          if(y<10)
            cout<<"0"<<y<<endl;
          else
            cout<<Y<<endl;
      }
};
int main()
{
    int h,m;
    time t;
    t.display();
    cout<<"Enter the time in hours and mins :"<<endl;
    cin>>h>>m;
    time t1(h,m);
    t1.display();
    time t2(t);
    t2.display();
    return 0;
}
