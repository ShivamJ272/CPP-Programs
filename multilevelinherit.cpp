#include<iostream>
using namespace std;
class A{
    protected:
    int roll;
    public:
    void getroll(){
        cout<<"Roll no = ";
        cin>>roll;
    }
    void putroll(){
        cout<<"Roll No = "<<roll;
    }
};

class B:public A{
    protected:
    int sub1,sub2;
    public:
    void getmarks(){
        cout<<"Enter the marks of 2 sub = ";
        cin>>sub1>>sub2;
    }
    void putmarks(){
        cout<<"\nMarks = "<<sub1+sub2;


    }
};

class C:public B{
    protected:
    int sptm;
    public:
    void getsptm(){
        cout<<"Enter sports marks = ";
        cin>>sptm;
    }
    void total(){
        putroll();
        putmarks();
        cout<<"\n\nTotal marks = "<<sub1+sub2+sptm;
    }
};

int main(){
    C aa;
    aa.getroll();
    aa.getmarks();
    aa.getsptm();
    aa.total();
    return 0;

}