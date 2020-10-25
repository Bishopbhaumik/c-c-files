#include<iostream>
using namespace std;
void print(char a){
    int n=80;
    while(n--) cout<<a<<" ";
}
void print(char a,int n){
    while(n--) cout<<a<<" ";
}

void print(){
    int n=80;
    while(n--){cout<<"* ";}
}
int main(){
    int inp,n;
    char a;
    cout<<"Enter \n1. a charecter n times\n2. a charecter 80 times\n3. * charecter 80 times\n4.quit";
    while(1){
        cout<<"\nEnter choice : ";
        cin>>inp;

        switch(inp){
            case 1: {cin>>a>>n;print(a,n);}break;
            case 2: {cin>>a;print(a);}break;
            case 3: {print();}break;
            case 4: return 0;
        }
    }
    return 0;
}
