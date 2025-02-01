#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age:"<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"He can vote"<<endl;
    }
    else if(age<=10)
    {
        cout<<"vote for kid"<<endl;
    }
    else
    {
        cout<<"He cannot vote"<<endl;
    }
}