#include<iostream>
#include<vector> 
using namespace std;
int main(){
    vector<int>num={0,1,0,3,12};
    vector<int>ans;
    int count=0;
    for(int val:num){
        if(val!=0){
            ans.push_back(val);
        }else{
            count++;
        }
    }
   for(int i=0;i<count;i++){
    ans.push_back(0);
   }
    for(int val:ans){
        cout<<val<<endl;
    }
    cout<<count;
}