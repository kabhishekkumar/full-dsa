#include<iostream>
using namespace std;
void change(int arr[], int size){
cout<<"in function\n";
    for(int i=0; i<size; i++){
        arr[i]= 2*arr[i];
    }
}
int main(){
int arr[]= {2,4,8};
change(arr, 3);
cout<<"in main\n";

 for(int i=0; i<3; i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;

}