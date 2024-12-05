#include<iostream>
#include<vector>
using namespace std;
bool feasible(vector<int>a,int mid,int k){
   
        int current=0;
    for(int val:a){
        current+=val/mid;
    }
   if(current>=k){
    return true;
   }else{
    return false;
   }
}
int main(){
    vector<int>a={5,8,6};
    int k=3;
    int minCandy=1;
    int maxCandy=0;
    for(int val:a){
        maxCandy=max(maxCandy,val);
    }
    int st=minCandy,end=maxCandy;
    int ans=0;
   while (st<=end)
   {
    int mid=st+(end-1);
    if(feasible(a,mid,k)){
        ans=mid;
        st=mid+1;
    }else{
        end=mid-1;
    }
   }
   cout<<ans;
    
}