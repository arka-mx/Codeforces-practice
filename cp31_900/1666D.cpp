#include <bits/stdc++.h>
using namespace std;

void logic(){
    string s,t;
    cin>>s>>t;

    int n = t.length();
    int last_index=INT_MAX;
    bool is_possible=true;
    bool char_found=false;
    for(int i=n-1;i>=0;i--){
        char_found=false;
        char ch = t[i];
        // cout<<ch<<endl;
        int j = s.length()-1;
        while (j>=0)
        {
            if(s[j]==ch){
                char_found=true;
                // cout<<last_index<<endl;
                if(j<last_index){
                    last_index=j;
                    s[j]='#';
                    break;
                }
                else{
                    // cout<<j<<" "<<last_index<<endl;
                    is_possible=false;
                    break;
                }
            }
            j--;
        }
        if(is_possible==false || char_found==false)break;
        
    }
    if(is_possible && char_found)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)logic();
}