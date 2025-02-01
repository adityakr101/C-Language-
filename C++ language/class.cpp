// class in c++
#include<iostream>
using namespace std;
class Employee{//class declaration
    private:
    int a,b,c;
    public:
    int d,e;
    void setData(int a1,int b1,int c1);//Declaration part
    void getData(){
        cout<<"The value of a is:"<<a<<endl;
        cout<<"The value of b is:"<<b<<endl;
        cout<<"The value of c is:"<<c<<endl;
        cout<<"The value of d is:"<<d<<endl;
        cout<<"The value of e is:"<<e<<endl;
    }
};
void Employee::setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    Employee aditya;
    // aditya.a=5;//it through error because a is a private member
    aditya.d=10;
    aditya.e=11;
    aditya.setData(7,8,9);
    aditya.getData();
    return 0;
}