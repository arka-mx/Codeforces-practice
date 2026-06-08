#include <bits/stdc++.h>
using namespace std;

long long secondSmallest(vector<long long> v) {
    // sort(v.begin(), v.end());
    return v[1];
}
void logic(){
    long long n;
    cin>>n;

    vector<vector<long long>> arrays(n,vector<long long> (0));
    long long l=0;
    for(long long i=0;i<n;i++){
        cin>>l;
        for(long long j=0;j<l;j++){
            long long x;
            cin>>x;
            arrays[i].push_back(x);
        }
        sort(arrays[i].begin(),arrays[i].end());
    }
    sort(arrays.begin(), arrays.end(), [](const vector<long long>& x, const vector<long long>& y) {
        return secondSmallest(x) > secondSmallest(y);
    });
    long long mini = (int)pow(10,9)+1;
    long long sum=0;
    for(long long i=0;i<n;i++ ){
        if(i!=n-1)
        sum+=arrays[i][1];
        mini = min(mini,arrays[i][0]);
    }
    sum+=mini;
    cout<<sum<<endl;

    
}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}