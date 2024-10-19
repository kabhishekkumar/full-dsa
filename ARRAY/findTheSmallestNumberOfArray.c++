#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[n];
    int i;
    int sum;
    for(i=0; i<n; i++){
        cout<<"enter the array:";
        cin>>arr[i];
    }
    int smallest = arr[1];
    for(i=0; i<n; i++){
    if(arr[i]<smallest){
    smallest= arr[i];
    
    }
 
}
 cout<<smallest;

}

