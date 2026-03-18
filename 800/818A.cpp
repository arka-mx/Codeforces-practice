#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;
    long long diplomas = floor(n/(2*(k+1)));
    long long certificates = k*diplomas;
    long long losers = n - diplomas - certificates;

    cout<<diplomas<<" "<<certificates<<" "<<losers<<" "<<endl;
}