// #include<iostream>
// using namespace std;
// int main(){
// int i,n;
// cout<<"enter the value of number:";
// cin>>n;
// int arr[n];
// for(i=0; i<n; i++){
//     cout<<"enter the array:";
//     cin>>arr[i];
// }

// cout<<"this is reverse array:"<<endl;

// for(i=(n-1); i>=0; i--){
//     cout<<arr[i]<<endl;
// }
// }

#include<iostream>
using namespace std;

void reverseArr(int arr[], int sz){
    int start= 0; int end = sz-1;
    while (start< end)
    {
       swap(arr[start], arr[end]);
       start++;
       end--;
    }
    
}

int main(){
int arr[]= {1,2,3,4,5};
int sz = 5;
reverseArr(arr, sz);

for(int i=0; i<sz; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}