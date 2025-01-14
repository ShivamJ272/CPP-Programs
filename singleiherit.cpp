#include<iostream>
using namespace std;

class A{
    protected:
    int x;
    public:
    void input(){
        cout<<"Enter No = ";
        cin>>x;
    
    }
};
class B : public A{
    int y ;
    public :
    void getdata(){
        cout<<"Enter No = ";
        cin>>y;

    }
    void putdata(){
        cout<<"Addition is = "<<x+y;

    }
};
int main(){
    B aa;
    aa.input();
    aa.getdata();
    aa.putdata();
    return 0;

}