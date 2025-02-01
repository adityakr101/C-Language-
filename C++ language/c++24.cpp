#include<iostream>
using namespace std;
// int c=8;
int main(){
    //**************************BUILD IN DATA TYPES******************* 
   /*int a,b,c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"the sum of a and b is:"<<c<<endl;
    cout<<"the value of c is:"<<::c<<endl;
    */
//  *******************Float,double and long double Literals****************
  /* float a=3.14f;
   long double b=2.65l;
//    cout<<"the value of a is:"<<a<<endl;
//    cout<<"the value of b is:"<<b<<endl;
      cout<<"the size of 3.14 is:"<<sizeof(3.14)<<endl;
      cout<<"the size of 3.14f is:"<<sizeof(3.14f)<<endl;
      cout<<"the size of 3.14F is:"<<sizeof(3.14F)<<endl;
      cout<<"the size of 2.65 is:"<<sizeof(2.65)<<endl;
      cout<<"the size of 2.65l is:"<<sizeof(2.65l)<<endl;
      cout<<"the size of 2.65L is:"<<sizeof(2.65L)<<endl;
    */
    //**********************Reference Variable*************************
    // int x=20;
    // int &y=x;
    //   cout<<x<<endl;
    //   cout<<y<<endl;
    // *********************Type casting******************************
    int x=45;
    float y=50.55;
    cout<<"the value of x is:"<<x<<endl;
    cout<<"the value of x is:"<<(float)x<<endl;
    cout<<"the value of x is:"<<float(x)<<endl;
    cout<<"the value of y is:"<<y<<endl;
    cout<<"the value of y is:"<<int(y)<<endl;
    cout<<"the sum of x and y is:"<<float(x)+int(y)<<endl;
    cout<<"the - of x and y is:"<<float(x)-int(y)<<endl;
    cout<<"the sum of x and y is:"<<float(x)-float(y)<<endl;
    cout<<"the sum of x and y is:"<<float(x)+float(y)<<endl;
}