
#include <bits/stdc++.h>
using namespace std;

void logic(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int left=0,right=0;
    bool possible=false;
    int maxi=INT_MIN;
    int i=1;
    for(i=1;i<n-1;i++){
        bool left_found=false,right_found = false;
        for(int j=0;j<i;j++){
            if(a[j]<a[i]){
                left = j;
                left_found=true;
                break;
            }
        }
        for(int k=i+1;k<n;k++){
            if(a[k]<a[i]){
                right=k;
                right_found=true;
                break;
            }
        }
        
        if(left_found && right_found){
            possible=true;
            break;
        }
    }
    if(possible){
        cout<<"YES"<<endl;
        cout<<left+1<<" "<<i+1<<" "<<right+1<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    
}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}
