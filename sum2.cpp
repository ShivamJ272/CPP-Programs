#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    sum=0;
    
    do
    {
        cout<<"Enter value of n =";
        cin>>n;

        sum=sum+n;
        cout<<"Sum is = "<<sum<<"\n";

        
    } while (n<=0);
    return 0;

    
}