#include<iostream>
#include<cstring>
using namespace std;
class concat_string
{
    string s1,s2,s3;
    int l,t=0;
public:
    void concat()
    {
        int i;
        cout<<"Enter the 1st string"<<endl;
        getline(cin,s1);
        for(i=0;s1[i]!='\0';i++);
        cout<<"Length of the 1st string : "<<i<<endl;
        cout<<"Enter the 2nd string"<<endl;
        getline(cin,s2);
        for(i=0;s2[i]!='\0';i++);
        cout<<"Length of the 2st string : "<<i<<endl;
        s3=s1+' '+s2;
        cout<<"The concated string is : :   \n \n"<<" "<<s3<<endl;
    }

};
int main()
{
    concat_string s;
    s.concat();
    return 0;
}
