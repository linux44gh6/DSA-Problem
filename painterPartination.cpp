#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool isPosiable(vector<int>a,int n,int m,int maxAllowedTime){
    int painter=1,time=0;
    for(int i=0;i<n;i++){
        if(time+a[i]<=maxAllowedTime){
            time+=a[i];
        }else{
            painter++;
            time=a[i];
        }
    }
   return painter<=m?true:false;
}
int minTimeToPaint(vector<int>a,int n,int m){
    int sum=0,maxVal=INT_MIN;
    for(int val:a){
        sum+=val,
        maxVal=max(maxVal,val);
    }
    int st=maxVal,end=sum;
    int ans=0;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isPosiable(a,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
}
int main(){
vector<int>arr={30,30,10,20};
int n=4,m=2;
cout<<minTimeToPaint(arr,n,m);
}