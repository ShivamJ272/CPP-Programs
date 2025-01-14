#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(int m,int n){
        a=m;
        b=n;
    }
    void putdata(){
        cout<<"\nA = "<<a<<"\tB = "<<b;
    }
};

int main(){
    int x,y;
    cout<<"Enter value of x & y= ";
    cin>>x>>y;
    
    demo aa(x,y);
    aa.putdata();
    return 0;


}