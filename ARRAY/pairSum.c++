#include<iostream>
using namespace std; 
int main(){
  int n,i,j;
  int target; 
  cout<<"enter the target element:";
  cin>>target;
  cout<<"enter the element of n:";
  cin>>n;
  int arr[n];
  for(i=0; i<n; i++){
    cout<<"enter the value of array :";
    cin>>arr[i];
  }

  for(i=0; i<n; i++){
    for(j= (i+1); j<n; j++){
        if(arr[i]+arr[j]==target){
            cout<<"position of pair sum of  "<<i<<" amd "<<j<<endl<<arr[i]<<"+"<<arr[j]<<"="<<arr[i]+arr[j];
        }
        
    }
  }
}