#include<iostream>
using namespace std;
void asc(int a[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}    
    void des(int a[],int n){
        int temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(a[j]<a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    }
    int main(){
        int a[20],n;
        cout<<"Enter the n value:";
        cin>>n;
        cout<<"Enter the values:\n";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        asc(a,n);
        cout<<"element is in ascending order:\n";
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        des(a,n);
        cout<<"\n element is in descending order:\n";
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        return 0;
    }
