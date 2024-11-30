#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>a1={1,2,3,0,0,0};
    vector<int>a2={2,5,6};
    int m=3;
    int n=3;
    vector<int>ans;
    for(int i=0;i<m;i++){
        ans.push_back(a1[i]);
    }
    for(int i=0;i<n;i++){
        ans.push_back(a2[i]);
    }
    sort(ans.begin(),ans.end());
    for(int val:ans){
        cout<<val;
    }
}