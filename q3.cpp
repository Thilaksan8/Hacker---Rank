#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>arr;
    int N;
    cin>>N;
    arr.resize(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}
