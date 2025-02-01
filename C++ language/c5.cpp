#include<iostream>
using namespace std;
void add(int a,int b){
    cout<<"int sum:"<<(a+b)<<endl;
}
void add(double a,double b){
    cout<<"double sum:"<<(a+b)<<endl;
}
int main(){
    add(5,6);
    add(3.1,3.2);
    return 0;                                                                                                                                                                               
}