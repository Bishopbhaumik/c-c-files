#include<iostream>

using namespace std;
class str{
    int n;
    char *p;
    public:
    str(){p=new char[0];n=0;p[0]='\0';}
    str(int size)
    {
     n=size+1;
    p=new char[n];}
    void getInput()
    {
    cout<<"Enter array: ";
    scanf("%s",p);
    }
    str operator+(str s2){
        str res(n+s2.n-1);
        int x;
        for(x=0;p[x]!='\0';x++){
            res.p[x]=p[x];
        }
        for(x=0;s2.p[x]!='\0';x++){
            res.p[x+n-1]=s2.p[x];
        }

        return res;
    }
    void display(){
        cout<<"String : ";
        for(int x=0;p[x]!='\0';x++){
            cout<<p[x];
        }
    }
};
int main(){
    int a,b;
    cout<<"Enter sizeof array1: ";
    cin>>a;
    cout<<"Enter sizeof array2: ";
    cin>>b;
    str p1(a),p2(b);
    p1.getInput();
    p2.getInput();
    str s3;
    s3=p1+p2;
    // p1.display();
    // p2.display();
    s3.display();
    return 0;
}
