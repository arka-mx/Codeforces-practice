#include <bits/stdc++.h>
using namespace std;

void logic(){
    int n,x;
    cin>>n>>x;

    vector<int> a(n);
    long long sum=0;
    long long min_bt=0,max_bt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%x==0)max_bt+=a[i]/x;
        else max_bt+=floor(a[i]/x)+1;
    }
    

    //for min_bt
    sum=0;
    for(int i=0;i<n;i++){
        if(a[i]%x ==0)min_bt+=a[i]/x;
        else{
            sum+=a[i];
        }
    }
    if(sum%x==0)min_bt+=sum/x;
    else{
        min_bt+=floor(sum/x)+1;
    }
    cout<<min_bt<<" "<<max_bt<<endl;
    
}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}