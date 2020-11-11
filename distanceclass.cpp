#include<iostream> 
#include<math.h> 
using namespace std; 
class dist{ 
    private: 
    int x,y; 
    public: 
    dist(int a,int b)
    { x=a;y=b; }
    void calcDistance(dist d2)
    { int m,n; 
    m=pow(x-d2.x,2); 
    n=pow(y-d2.y,2); 
    cout<<"Distance is :"<<sqrt(m+n)<<endl; 
    }
    };
    int main()
    {
        int x,y; 
        cout<<"Enter quad: "; 
        cin>>x>>y; 
        dist a(x,y); 
        cout<<"Enter quad: "; 
        cin>>x>>y; 
        dist b(x,y); 
        a.calcDistance(b); 
        cout<<"Done!!"<<endl; 
        return 0;
    }