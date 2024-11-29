#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={0,10,5,2};
    int st=1;
    int end=nums.size()-2;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid-1]<nums[mid]&&nums[mid]>nums[mid+1]){
            cout<<mid;
            return;
        }else if(nums[mid]>nums[mid-1]){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
}