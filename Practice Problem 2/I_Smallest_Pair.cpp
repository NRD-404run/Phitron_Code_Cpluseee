#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        for (int i = 1; i < n + 1; i++)
        {
            cin >> arr[i];
        }
        int ans = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j < n + 1; j++)
            {
                int value = arr[i] + arr[j] + j - i;
                // cout << arr[i] << " + " << arr[j] << " + " << j << "  - " << i << " = " << value << endl;
                ans = min({ans, value});
                //    if(ans > value){
                //     ans = value;
                //    }
            }
        }
        cout << ans << endl;
    }
}