#include<iostream>
#include<vector>
using namespace std;
int main(){
    
int temp=0;
    vector<int> vec = {9,6,9,8,6};
    
   for(int i : vec){
 temp = temp^i;
   }
   cout<<temp;
    }
   
