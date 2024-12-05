#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &a, int n, int m, int allowedPages) {
    if(m>n){
        return -1;
    }
    int stu = 1, pages = 0; 
    for (int i = 0; i < n; i++) {
        if (a[i] > allowedPages) {
            return false;
        }
        if (pages + a[i] <= allowedPages) {
            pages += a[i];
        } else { 
            stu++;
            pages = a[i];
        }
        
    }
  return stu>m?false:true;
    
}

int allocatesBooks(vector<int> &a, int n, int m) {
    if (m > n) { 
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    int st = 0, end = sum;
    int ans = 0;
    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (isValid(a, n, m, mid)) {
            ans = mid; 
            end = mid - 1; 
        } else {
            st = mid + 1; 
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2; 
    cout << allocatesBooks(arr, n, m);
    return 0;
}
