#include<iostream>
using namespace std;
void add(int a,int b)
{
    int c;
    c=a+b;
    cout<<c;

}
void add(int a,int b,int c)
{
    int d;
    d=a+b+c;
    cout<<"\n"<<d;

}
int main()
{
    add(10,20);
    add(10,20,30);
    return 0;
    
}