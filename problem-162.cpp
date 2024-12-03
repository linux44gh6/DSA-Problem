#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a={1};
    int n=a.size();
    int st=1,end=n-2;
    while (st<=end)
    {
        int mid=st+(end-st)/2;
        if(a[mid]>a[mid-1]&&a[mid]>a[mid+1]){
            cout<<mid;
           break;
        }
        else if(a[mid]>a[mid-1]){
            st=mid+1;
        }else if(a[mid]<a[mid+1]){
            end=mid-1;
        }
    }
    
}