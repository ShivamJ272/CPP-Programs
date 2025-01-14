#include<iostream>
using namespace std;
int main()
{
    int n,i,j,b;
    cout<<"Enter no.of rows : ";
    cin>>n;
    i=1;
    while(i<=n)
    {
        b=1;
        while(b<=i)
        {
            cout<<" ";
        
        }
        j=1;
        while(j<=2*i-1)
        {
            cout<<"*";
            j++;

        }

        i++;
        
    }
    return 0;
}