#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(0);
       v.push_back(2);
          v.push_back(3);
           v.push_back(5);
       v.push_back(4);
         

          cout<<v.size()<<endl ;
          cout<<v.capacity();
      
}