#include <bits/stdc++.h>
using namespace std;

void logic() {

    int n;
    cin >> n;

    unordered_map<int,int> mp;

    int x;

    for(int i=0;i<n;i++){
        cin >> x;
        mp[x]++;
    }

    int maxi = 0;

    for(auto &it : mp){
        maxi = max(maxi, it.second);
    }

    int ops = 0;
    int have = maxi;

    while(have < n){

        int take = min(have, n - have);

        ops += 1;      // clone
        ops += take;   // swaps

        have += take;
    }

    cout << ops << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--)
        logic();
}