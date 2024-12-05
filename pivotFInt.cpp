#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a={1,7,3,6,5,6};
    int n=a.size();
    int total=0;
   for(int i=0;i<n;i++){
    total=a[i];
   }
   int leftSum=0;
    for(int i=0;i<n;i++){
        if(leftSum==total-leftSum-a[i]){
            cout<<i<<endl;
            return 0;
        }
        leftSum+=a[i];
    }
}