#include<iostream>
using namespace std;
int main()
{
    int n,fac;
    cout<<"Enter value of number = ";
    cin>>n;
    fac=1;
    while(n>=1)
    {
        fac=fac*n;
        n=n-1;

    }
    cout<<"Factorial is = "<<fac;
    return 0;
    
}