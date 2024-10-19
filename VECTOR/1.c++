#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target = 9;
    vector<int> vec = {9,7,5,2,6};
    
     int n = vec.size();
     cout<<n<<endl;
       for(int i =0; i<n-1; i++){
         for(int j=(i+1); j<n; j++){
            if((vec[i]+vec[j])==target){
   cout<<i<<" "<<j;
            }
            
         }
    }
   return {};
    }
   
