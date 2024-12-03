#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>a={3,0,1};
    int n=a.size();
    int sum1=(n*(n+1))/2;
    int acutal_sum=0;
    for(int val:a){
        acutal_sum+=val;
    }
    int mis=sum1-acutal_sum;
    cout<<mis;
}