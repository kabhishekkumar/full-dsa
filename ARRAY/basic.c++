#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
   
  
  for(int i=0; i<n; i++){
    cout<<"enter the value of array";
    cin>>arr[i];
  }

   for(int i=0; i<n; i++){
    cout<<arr[i]<<endl;
   
  }
}