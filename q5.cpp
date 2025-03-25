#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int binarysearch(vector<int>&num,int n,int data){
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(data==num[mid]) return mid;
        if(num[l] <= num[mid]){
            if(num[l]<=data && data<num[mid]) r=mid-1;
            else l=mid+1;
        }else{ 
            if(num[mid]<data && data<=num[r]) l=mid+1;
            else r=mid-1;
        }
    }
    return -1;
}

int main() {
    vector<int> num;
    int val,target;
    char end;
    while(cin>> val){
        num.push_back(val);
        if(cin.peek()=='\n') break;
        cin>>end;
    }
    cin>>target;
    cout<<binarysearch(num,num.size(),target);
    
    return 0;
}
