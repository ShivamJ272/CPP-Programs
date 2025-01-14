#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number = ";
    cin>>a;
    if(a%2==0)
    {
        goto even;

    }
    else
    {
        goto odd;

    }
    even:
    cout<<"Its even";
    return 0;
    odd:
    cout<<"Its odd";
    return 0;
    
}