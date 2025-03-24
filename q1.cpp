#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,x,n;
    cin>>N;
    vector<int>v(N);
    for(int i=0;i<N;i++){
        cin>>v[i];
       
    }
    sort(v.begin(),v.end()); 
    cin>>n;
    while(n--)
    {
        cin>>x;
        auto p=lower_bound(v.begin(),v.end(),x);
        if(p!=v.end() && *p==x){
            cout<<"Yes "<<(p-v.begin()+1)<<endl;
        }else{
            cout<<"No "<<(p-v.begin()+1)<<endl;
        }
    }
    return 0;
}
