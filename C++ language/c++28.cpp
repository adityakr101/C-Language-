#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
int main(){
    cout<<"the sum of 5 and 6 is:"<<sum(5,6)<<endl;
    cout<<"the sum of 5,4 and 6 is:"<<sum(5,4,6)<<endl;
    return 0;
}