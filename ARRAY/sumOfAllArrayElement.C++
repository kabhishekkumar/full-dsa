#include<iostream>
using namespace std;
int main(){
    int n,i; 
    cout<<"enter the vlaue of n:";
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        cout<<"enter the value of array:";
        cin>>arr[i];
        }
int sum=0;
        for(i=0; i<n; i++){
          sum = sum+arr[i];
         
        }
     
       cout<<sum;
}