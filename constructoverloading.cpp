#include<iostream>
using namespace std;
class demo{
    int a;
    public:
    demo(){
        a=10;
    }
    demo(int b){
        a=b;
    }
    demo(demo &z){
        a=z.a;
    }

    void putdata(){
        cout<<"A = "<<a;

    }
};

int main(){
    demo aa;
    demo bb(15);
    demo cc(bb);
    aa.putdata();
    bb.putdata();
    cc.putdata();

}