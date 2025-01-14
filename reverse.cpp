#include<iostream>
using namespace std;
int main()
{
    int i,rev;
    cout<<"Enter number = ";
    cin>>i;
    rev=0;
    while(i>0)
    {
        rev=(rev*10)+i%10;
        i=i/10;

    }
    cout<<"Reverse number is = "<<rev;
    return 0;
    
}