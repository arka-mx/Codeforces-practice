#include <bits/stdc++.h>
using namespace std;
 
void logic(){
    int n,k;
    cin>>n>>k;
    bool possible=false;
    for(int i=0;i<=n/min(2,k)+1;i++){
        int part1 = 2*i;
        int part2 = n-part1;
        if(part2%k==0){
            cout<<"YES"<<endl;
            possible=true;
            break;
        }
    }
    if(possible==false)
    cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)logic();
}
