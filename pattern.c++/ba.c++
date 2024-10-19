#include<iostream>
using namespace std;
 int main(){
    int i,j,n;
    cout<<"enter the n:";
    cin>>n;
    for(i=n; i>0; i++ ){
        for(j=n; j<=i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
 }