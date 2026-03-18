#include <bits/stdc++.h>
using namespace std;

void logic(){
    //n is the number of videos and t is the time of lunch
    int n,t;
    int max_entertainment=0;
    int video_index=-1;
    cin>>n>>t;
    vector<int> durations(n);
    vector<int> entertainment(n);
    for(int i=0;i<n;i++)
    cin>>durations[i];

    for(int i=0;i<n;i++)
    cin>>entertainment[i];

    for(int i=0;i<n;i++){
        
        if(durations[i]<=t && entertainment[i]>=max_entertainment){
            video_index=i+1;
            max_entertainment = entertainment[i];
        }
        t--;
    }
    cout<<video_index<<endl;

}

int main(){
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)
    logic();
}