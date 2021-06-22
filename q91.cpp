#include<iostream>
using namespace std;
class shape{
public:
    int a, b;
    float area;
    void get_b(){
        cout<<"Enter b: ";
        cin>>b;
    }
    void get_a(){
        cout<<"Enter a: ";
        cin>>a;
    }
    virtual void calcArea()=0;
};
class square:public shape{
    public:
        void getInput(){get_a();}
        void calcArea(){
            cout<<"\nSquare"<<endl;
            getInput();
            area=a*a;
            cout<<"Area is "<<area;
        }        
};
class triangle:public shape{
    public:
        void getInput(){get_a();get_b();}
        void calcArea(){
            cout<<"\nTriangle"<<endl;
            getInput();            
            area=a*b*0.5;
            cout<<"Area is "<<area;
        }        
};
class circle:public shape{
    public:
        void getInput(){get_a();}
        void calcArea(){
            cout<<"\nCircle"<<endl;
            getInput();
            area=3.14*a*a;
            cout<<"Area is "<<area;
        }        
};
int main(){
    /*
    square r;
    circle c;
    triangle t;
    t.calcArea();
    c.calcArea();
    r.calcArea();
    */
    shape *s;
    square r;
    circle c;
    triangle t;
    s=&r;s->calcArea();
    s=&c;s->calcArea();
    s=&t;s->calcArea();
    
    // *s=triangle();s->calcArea();
    
    return 0;
}