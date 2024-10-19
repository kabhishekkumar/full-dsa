#include<iostream>
using namespace std;
int convertBIntoD(int Bnumber){
int ans=0, pow = 1;
while (Bnumber>0)
{
  int rem = Bnumber%10;
Bnumber/=10;

ans += (rem*pow);
pow *= 2; 
}
return ans;

}


int main(){
int result = convertBIntoD(1100110);
cout<<result;
}