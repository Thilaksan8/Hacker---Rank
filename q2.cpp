#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int N,x,a,b;
    cin>>N;
    vector<int>v;
    for(int i=0;i<N;i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>x;
    cin>>a;
    cin>>b;
    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);
    
    cout<<N-1+(a-b)<<endl;
    for(int i:v){cout<<i<<" ";}
    return 0;
}
