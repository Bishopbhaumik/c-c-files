#include<iostream>
using namespace std;
class number{
int x,y;
public:
    number(){
    }
    number(int j,int k)
    {
        x=j;
        y=k;
    }
    void display(void);
    number operator +(number d){
     number t;
    t.x=x+d.x;
    t.y=y+d.y;
    return t;

    }

};

void number::display()
{

    cout<<x<<y<<endl;
}

int main()
{
    number s(2,3),p(6,7),m;
    s.display();
    p.display();
  m=s+p;
    m.display();
    return 0;

}
