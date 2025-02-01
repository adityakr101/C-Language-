#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
    void setId(void){
        salary=210;
        cout<<"Enter the id of Employee:";
        cin>>id;
    }
    void getId(void){
        cout<<"The id of this Employee is:"<<id<<endl;
    }
};
int main(){
    Employee ak[4];
    for(int i=0;i<4;i++){
        ak[i].setId();
        ak[i].getId();
    }
    return 0;
}