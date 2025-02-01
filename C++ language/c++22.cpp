#include<iostream>
using namespace std;
class A{
    private:int x;
    public:A()
    A(int y){
        this->x=y;
    }
    A operator--();
    A operator--(int);
    void show()
    {
        cout<<x;
    }
};
A A::operator--(int){
    A temp=*this;
    x--;
    return temp;
}
int main(){
    A m1(10),m2;
    --m1;
    m1.show();
    m2=--m1;
    m2.show();
    m1.show();
    m1--;
    m1.show();
    m2=m1--;
    m1.show();
    m2.show();
    return 0;
}