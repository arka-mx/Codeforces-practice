#include <bits/stdc++.h>
using namespace std;

void logic()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> cards(n, vector<int>(m));
    vector<vector<int>> temp;
    vector<int> temp1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> cards[i][j];
    }
    int total_win = 0;
    int setter = 0;
    bool streak=true;
    while (n >= 1)
    {

        cout<<"-------------------------"<<endl;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < m; j++)
            {

                int win = cards[i + 1][j] - cards[i][j];
                
                if (streak)
                {
                    
                    temp1.push_back(win * pow(-1, setter));
                    setter++;
                }else temp
                total_win += abs(win);
            }
            temp.push_back(temp1);
            
            temp1.clear();
        }
        n--;
        cards = temp;
        temp.clear();
        temp1.clear();
    }
    cout << total_win << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        logic();
}