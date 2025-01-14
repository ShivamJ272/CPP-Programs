#include<iostream>
using namespace std;

class demo{
    int x,y;
    static int z;
    public:
    void getdata(int a,int b){
        x=a;
        y=b;
        z=z+1;
    }

        void putdata(){
            cout<<"\nx = "<<x<<"\ty = "<<y<<"\tz = "<<z;

        }

    
};

int demo::z;

int main(){
    demo aa,bb;
    aa.getdata(4,5);
    bb.getdata(3,4);
    aa.putdata();
    bb.putdata();
    return 0;


}