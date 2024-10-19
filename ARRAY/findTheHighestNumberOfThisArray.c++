#include<iostream>
using namespace std;
int main(){
    int i;
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    for(i=0; i<=n; i++){
        cout<<"enter the vlaue of array:";
        cin>>arr[i];
    }
    int largest = arr[2];
    for(i=0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
        
    }
    cout<<largest;
}