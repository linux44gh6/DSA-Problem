#include <iostream>
#include <vector>
using namespace std;

void findMedian(vector<int>a){
    int n=a.size();
    double st=a[0];
    double end=a[n-1];
    double mid=st+(end-st)/2;
    cout<<mid;
}
void mergedArray(vector<int>& a1, vector<int>& a2) {
    vector<int> merged;
    int n1 = a1.size();
    int n2 = a2.size();
    int i = 0, j = 0;

    // Merge elements while both arrays have elements left
    while (i < n1 && j < n2) { 
        if (a1[i] <= a2[j]) {
            merged.push_back(a1[i]);
            i++;
        } else {
            merged.push_back(a2[j]);
            j++;
        }
    }

    // Add remaining elements from a1
    while (i < n1) {
        merged.push_back(a1[i]);
        i++;
    }

    // Add remaining elements from a2
    while (j < n2) {
        merged.push_back(a2[j]);
        j++;
    }
    findMedian(merged);
}

int main() {
    vector<int> a1 = {1, 2};
    vector<int> a2 = {3,4};
    mergedArray(a1, a2);
    return 0;
}
