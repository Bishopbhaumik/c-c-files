#include<iostream>
using namespace std;
class dist{
    public:
    int f;
    int i;


    dist(){f=0;i=0;}
    dist(int a,int b){
        f=a;
        i=b;
    }

    dist operator+(dist d){
        dist re(f+d.f,i+d.i);
        return re;
    }
    dist operator + (int d){
        dist re(f+d,i+d);
        return re;
    }
    void operator - (){
        f=-f;
        i=-i;
    }
    void show(){
        cout<<f<<" "<<i<<endl;
    }
};
int main(){
    int a,b;
    cout<<"Enter d1: ";cin>>a>>b;dist d1(a,b);
    cout<<"Enter d2: ";cin>>a>>b;dist d2(a,b);
    dist c;
    c=d1+d2;
    cout<<"first object:"<<endl;
    cout<<"d1: ";d1.show();
    cout<<"second object:"<<endl;
    cout<<"d2: ";d2.show();
    cout<<"after adding two objects"<<endl;
    cout<<"d1 + d2: ";c.show();
    cout<<"negetion of first object"<<endl;
    cout<<"-d1: ";-d1;
    d1.show();
    cout<<"negetion of second object:";
    cout<<"-d2:";-d2;
    d2.show();
    -d2;
    cout<<"after adding 4 to second object:"<<endl;
    c=d2+4;
    cout<<"d1 + 4: ";c.show();
    return 0;
}
