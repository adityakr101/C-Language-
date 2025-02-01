#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    /***************************constants in c++****************************
  const int a=5;
    
    cout<<"the value of a was:"<<a<<endl;
     a=25;//you will get an error because a is a constant
    cout<<"the value of a is:"<<a<<endl;
*/
/***************Manipulators in c++*****************************************
int a=5,b=25,c=30;
cout<<"the value of a is:"<<a<<endl;
cout<<"the value of b is:"<<b<<endl;
cout<<"the value of c is:"<<c<<endl;
cout<<"the value of a is:"<<setw(4)<<a<<endl;
cout<<"the value of b is:"<<setw(4)<<b<<endl;
cout<<"the value of c is:"<<setw(4)<<c<<endl;
 */
//**************Operator precedence****************************************
int a=3,b=4;
// int c=((((a*5)+b)-45)+87);
int c=(a*5+b-45+87);
cout<<c;       
     return 0;
}