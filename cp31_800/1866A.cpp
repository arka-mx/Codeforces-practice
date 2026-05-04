#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> A(N);
    int mini = INT_MAX;
    for(int i=0;i<N;i++){
        cin>>A[i];
        A[i] = abs(A[i]);
        mini = min(A[i],mini);
    }
    cout<<mini<<endl;

}