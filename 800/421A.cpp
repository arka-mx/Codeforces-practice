#include <bits/stdc++.h>
using namespace std;

void logic(){
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> arthur(a);
    vector<int> alexander(b);

    for(int i=0;i<a;i++)cin>>arthur[i];
    for(int i=0;i<b;i++)cin>>alexander[i];

    sort(arthur.begin(),arthur.end()); 
    sort(alexander.begin(),alexander.end()); 
    
    for(int i=1;i<=n;i++){
        if(find(arthur.begin(),arthur.end(),i)!=arthur.end()){
            cout<<1<<" ";
        }else if(find(alexander.begin(),alexander.end(),i)!=alexander.end())cout<<2<<" ";
    }

    cout<<endl;
}

int main(){
    logic();
}