#include<iostream>
using namespace std;
int main()
{
    int i,sum,n;
    i=1;
    sum=0;
    cout<<"Enter value of n = ";
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;

    }
    cout<<"sum is = "<<sum;
    return 0;
    

}