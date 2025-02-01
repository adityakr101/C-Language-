#include<iostream>
using namespace std;
int main(){
    double arr[4]={0,0,0,0};
    int index;
    cout<<"Enter array index:";
    cin>>index;
    try{
        if(index>=4)
        throw "Error:array out of bounds!";
    }
    catch(const char *msg){
        cout<<"msg";
    }
    return 0;

}