#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>a={1,0,1,1,0,1};
    int maxC=0;
    int curr=0;
    for(int val:a){
        if(val==1){
            curr+=val;
        }else{
            curr=0;
        }
        maxC=max(curr,maxC);
    }
    
    cout<<maxC;
}