// print the sub array

#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    
    for(i=0; i<n; i++){
        cout<<"enter the value of array";
        cin>>arr[i];
    }
    int sum =0;
for(int st=0; st<n; st++){
    for(int ed= st; ed<n; ed++){
       for(i=st; i<=ed; i++ ){
        cout<<arr[i];
        sum += arr[i]; 
        
       }
       cout<<" ";
    }
    // cout<<sum<<endl;
    cout<<endl;
}
cout<<"sum of all sub array = "<<sum;
}