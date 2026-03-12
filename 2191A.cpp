#include <bits/stdc++.h>
using namespace std;

void logic(){
    int n;
    cin>>n;
    vector<pair<int,string>> v(n);
    string check="YES";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v[i].first = x;
        if(i%2==0)
        v[i].second = "R";
        else v[i].second = "B";
    }
    //sorting
    sort(v.begin(),v.end());
    //checking
    for(int i=0;i<n-1;i++){
        if(v[i].second==v[i+1].second){
            check="NO";
            break;
        }
    }
    cout<<check<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        logic();
}