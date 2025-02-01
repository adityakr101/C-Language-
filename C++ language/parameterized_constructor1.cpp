#include<iostream>
using namespace std;
class point{
    int x,y;
    public:
    point(int a,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }
};
int main(){
    point a1(1,4);
    a1.display();
    point a2(5,8);
    a2.display();
    return 0;    
}