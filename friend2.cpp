#include<iostream>
using namespace std;

class rec{
    private:
    int l;
    int b;

    public:
    void input(){
        cout<<"Enter the length = ";
        cin>>l;
        cout<<"Enter the breadth = ";
        cin>>b;
    }

    void display(){
        cout<<"Your Length is = "<<l<<endl;
        cout<<"Your breadth is = "<<b<<endl;
    }

    friend void area(rec);
    
};

void area(rec aa){
    int ar;

    ar=aa.l * aa.b;
    cout<<"Your area is = "<<ar<<endl;

}

int main(){
    rec bb;
    bb.input();
    bb.display();
    area(bb);

}