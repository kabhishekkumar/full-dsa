#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> abhi = {1,2,3,4,5,6,7,8,9};
    cout<<"size"<<" " <<abhi.size()<<endl;
   abhi.push_back(10);
   abhi.pop_back();

   for(int i: abhi){
    cout<<i<<endl;
   }
    cout<<abhi.front()<<" ";
    cout<<abhi.back()<<" ";
cout<<abhi.at(2);
}