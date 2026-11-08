#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int tc=0; tc<t; tc++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string seen = "";
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            if(seen.find(s[i]) == string :: npos)
            {
                ans += 2;
                seen += s[i];
            }else{
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}