#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, v, t;
    int cnt = 0;
    cin >> n;
    while(n--)
    {
        cin >> p >> v >> t;
        if (p + v + t >= 2)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
