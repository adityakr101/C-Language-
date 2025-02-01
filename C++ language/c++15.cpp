#include<iostream>
using namespace std;
int main()
{
    int i, marks[6];
    for(i=0;i<6;i++)
    {cout<<"Enter the marks of "<<i<<"th student"<<endl;
    cin>>marks[i];
    }
    for(i=0;i<6;i++)
    {
        cout<<"the marks of "<<i<<"th student is "<<marks[i]<<endl;
    }
}