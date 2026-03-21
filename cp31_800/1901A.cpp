#include<bits/stdc++.h>
using namespace std;

void logic(){
    int n,x;
    cin>>n>>x;

    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    int gap_max=0;
    for(int i=0;i<n;i++){
        if(i==0){
            if(n==1){
                gap_max = max(a[i],2*(x-a[i]));
                break;
            }else{
                gap_max = a[i];
            }
        }
        else if(i<n-1){
            gap_max = max(gap_max,a[i]-a[i-1]);
        }else{
            gap_max = max(gap_max,a[i]-a[i-1]);
            gap_max = max(gap_max,2*(x-a[i]));
        }
    }
    cout<<gap_max<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)logic();
}
