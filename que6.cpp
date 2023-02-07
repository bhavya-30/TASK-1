#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the value of a and b:";
    cin>>a>>b;
    cout<<"before swapping value of a and b is:"<<a<<","<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"after swapping value of a and b is:"<<a<<","<<b<<endl;
    return 0;

}