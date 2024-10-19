// print the mixmum  subarray array sum
// using brut force approach
 

#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]= {1,2,3,4,5};
   
 int maxSum = 0;
for(int st=0; st<n; st++){
    int currSum = 0;
    for(int ed= st; ed<n; ed++){
      currSum += arr[ed];
      maxSum = max(currSum , maxSum);
     
    }
}
cout<<"max subarray sum:"<<maxSum<<endl;

return 0;

}