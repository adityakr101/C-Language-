#include<iostream>
using namespace std;
// base class
class Employee{
    public:
    int id;
    float salary;
    Employee(int inpId){
        id=inpId;
        salary=34.0;
    }
    Employee(){}
};
// creating a programmer class derived from Employee base class
class programmer:public Employee{
    public:
    int languagecode;
    programmer(int inpId){
        id=inpId;
        languagecode=9;
    }
    void getData(){
        cout<<id<<endl;
    }
};
int main(){
    Employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skillf(10);
    cout<<skillf.languagecode<<endl;
    cout<<skillf.id<<endl;
    skillf.getData();
    return 0;
}