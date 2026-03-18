#include <bits/stdc++.h>
using namespace std;

bool searching(vector<int> a,int x){
    for(int i=0;i<a.size();i++){
        if(x==a[i])return true;
    }
    return false;
}

void logic(){
    int n,m,k;
    cin>>n>>m>>k;

    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];

    string s;
    cin>>s;
    int no_of_robots = n;
    //applying instructions on each robot
    
    for(int i=1;i<=k;i++){
        
        for(int j=0;j<n;j++){
            char ch = s.at(i-1);
            if(ch=='L')a[j]-=1;
            else a[j]+=1;
            if(searching(b,a[j]))no_of_robots--;
        }
        cout<<no_of_robots<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}