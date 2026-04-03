#include <bits/stdc++.h>
using namespace std;

void logic()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int lmin = 0;
    int water_count = 0;
    int empty_cells = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            empty_cells++;
            lmin++;

            if(lmin>=3){
                water_count=2;
                break;
            }else{
                water_count=empty_cells;
            }
        }else{
            lmin=0;
        }
    }
    cout << water_count << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        logic();
}