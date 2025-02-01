#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class bank
{
 int acno;
 char nm[100] ;
 float bal; 
 public:
 bank( char *name,int acc_no,float balance) //Parameterized Constructor
 {
 
 strcpy(nm, name);
 acno=acc_no;
 bal=balance;
 }
 void deposit();
 void withdraw();
 void display();
};
void bank::deposit() //depositing an amount
{
 int damt1;
 cout<<"\n Enter Deposit Amount = ";
 cin>>damt1;
 bal+=damt1;
}
void bank::withdraw() //withdrawing an amount
{
 int wamt1;
 cout<<"\n Enter Withdraw Amount = ";
 cin>>wamt1;
 if(bal<500){
 cout<<"\n Cannot Withdraw Amount";
 }
 else
 {
 bal-=wamt1;
 }
}
void bank::display() //displaying the details
{
 cout<<"\n ----------------------";
 
 cout<<"\n Name : "<<nm;
 cout<<"\n Accout No. : "<<acno;
 cout<<"\n Balance : "<<bal; 
}
int main()
{
 char name[100];
 int acc_no;
 float balance;
 cout<<"\n Enter Details: \n";
 cout<<"-----------------------";
 cout<<"\n Name : ";
 cin>>name;
 cout<<"\n Accout No. ";
 cin>>acc_no;
 cout<<"\n Balance : ";
 cin>>balance;
 
 bank b1(name,acc_no,balance); //object is created
 b1.deposit(); //
 b1.withdraw(); // calling member functions
 b1.display(); //
 return 0;
}