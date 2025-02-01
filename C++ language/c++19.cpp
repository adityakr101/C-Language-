#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class student
{
char name[20];
char usn[20];
int m1,m2,total;
public:
student(char *na, char *u ,int m, int n)
{
strcpy(name, na);
strcpy(usn,u);
m1=m;
m2=n;
}
void disp();
};
void student::disp()
{
cout<<"Student Information:\n";
cout<<"name: "<<name<<endl;;
cout<<"usn: "<<usn<<endl;
cout<<"m1:"<<m1<<"\nm2:"<<m2;
total=m1+m2;
cout<<"\ntotal is:"<<total;
}
int main()
{
char nm[20],usn[20];
int m1,m2;
cout<<"Enter name ,usn and marks of a student:\n";
cout<<"enter name:";
cin>>nm;
cout<<"enter usn:";
cin>>usn;
cout<<"enter the two test marks:";
cin>>m1>>m2;
student st(nm,usn,m1,m2);
st.disp();
return 0;
}
