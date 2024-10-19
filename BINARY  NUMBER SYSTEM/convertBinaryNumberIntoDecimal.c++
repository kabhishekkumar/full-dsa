#include<iostream>
using namespace std;

int convertBIntoD(int decNum){
   int ans=0, pow=1;
   while (decNum>0)
   {
      int  remNum = decNum%10;
  decNum/=10;

  ans += (remNum * pow);
  pow *= 2;
   }
   
  return ans;
  
}

 
 int main(){
   int num;
   cout<<"enter the number:";
   cin>>num;
    int answer = convertBIntoD(num);
    cout<<answer;

    // for(int i=0; i<=10; i++){
    //   cout<<convertDIntoB(i)<<endl;
    // }
    return 0;
 }