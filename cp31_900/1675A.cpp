#include <bits/stdc++.h>
using namespace std;

void logic(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int ops=0;
    for(int i=n-2;i>=0;i--){
        while (a[i]>=a[i+1])
        {
            if(a[i]==0)break;
            a[i] = floor(a[i]/2);
            ops++;
            /* code */
        }
        
    }
    bool is_increasing=true;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            is_increasing=false;
            break;
        }
    }
    if(is_increasing)cout<<ops<<endl;
    else cout<<-1<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}