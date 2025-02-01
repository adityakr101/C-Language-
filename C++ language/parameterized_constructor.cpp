#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int,int);
    void printNumber(){
        cout<<"Your complex Number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
complex::complex(int x,int y){//passing parameter as x and y
    a=x;
    b=y;
}
int main(){
    complex c1(10,5);
    c1.printNumber();
    complex c2=complex(7,5);
    c2.printNumber();
    return 0;  
}