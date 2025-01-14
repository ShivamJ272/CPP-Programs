#include<iostream>
using namespace std;

class B;
class A{

    int a;
    public:
    void getdata(){
        cout<<"Enter value of a = ";
        cin>>a;

    }

    friend void max(A,B);
};

class B{
    int b;
    public:
    void getdata(){
        cout<<"Enter value of b = ";
        cin>>b;

    }

    friend void max(A,B);

};

void max(A a, B b){
    if(a.a > b.b){
    cout<<"A is MAX";
    }
    else
    cout<<"B is MAX";

}

int main(){
    A aa;
    B bb;
    aa.getdata();
    bb.getdata();

    max(aa,bb);
    return 0;
    
}