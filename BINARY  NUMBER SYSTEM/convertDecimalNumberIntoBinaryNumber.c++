#include<iostream>
using namespace std;

int convertDIntoB(int decNum){
   int ans=0, pow=1;
   while (decNum>0)
   {
      int  remNum = decNum%2;
  decNum/=2;

  ans += (remNum * pow);
  pow *= 10;
   }
   
  return ans;
  
}

 
 int main(){
   int num;
   cout<<"enter the number:";
   cin>>num;
    int answer = convertDIntoB(num);
    cout<<answer;

    for(int i=0; i<=10; i++){
      cout<<convertDIntoB(i)<<endl;
    }
    return 0;
 }