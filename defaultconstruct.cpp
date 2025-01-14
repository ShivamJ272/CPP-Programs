#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(){
        a=10;
        b=15;

    }

    void putdata();
};

void demo::putdata(){
    cout<<"A = "<<a<<"\tB = "<<b;
}

int main(){
    demo aa;
    aa.putdata(); 
    return 0;

}