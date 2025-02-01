#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a and b:";
    cin>>a>>b;
    int x=a-b;
    try{
        if(x!=0){
            cout<<"Result(a/x)="<<(a/x);
        }
        else{
            throw(x);
        }
    }
    catch(int i){
        cout<<"Exception caught:Divid by zero"<<endl;
        
        cout<<"END";
    }
    return 0;
}
