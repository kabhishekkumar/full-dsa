#include<iostream>
using namespace std;
int main(){
    int n,i,target;
    cout<<"enter the target:";
    cin>>target;
    cout<<"enter the number:";
    cin>>n;
    int arr[n];
    
    for(i=0; i<n; i++){
        cout<<"enter the array:";
        cin>>arr[i];
    }

    for(i=0; i<n; i++){
        if(arr[i]==target){
            cout<<"target is found:"<<i<<endl;
        }
    
     
    }

}