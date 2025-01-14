#include<iostream>
using namespace std;
class xyz
{
    int a,b;
    public:
    void getdata();
    void putdata();
};

void xyz :: getdata()
{
    cout<<"Enter two numbers = ";
    cin>>a>>b;
}

void xyz :: putdata()
{
    cout<<"\n a = "<<a;
    cout<<"\n b = "<<b;
}

int main(){
    xyz aa[5];
    int i,j;
    for(i=0;i<5;i++){
        aa[i].getdata();
    }
    
    for(i=0;i<5;i++){
        aa[i].putdata();

    }
    return 0;

}