#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll b, c, d;
    cin >> b >> c >> d;
    ll a = 0;
    for (int i = 0; i < 61; i++)
    {
        int bb = (b >> i & 1), cc = (c >> i & 1), dd = (d >> i & 1);
        int ok = 0;
        for (ll j = 0; j < 2; j++)
        {
            if ((j | bb) - (j & cc) == dd)
            {
                ok = 1;
                a += j << i; // 位运算要注意整数类型，int进行右移后只能得到int，ll右移后才能得到ll
                break;
            }
        }
        if (!ok)
        {
            cout << -1 << "\n";
            return;
        }
    }
    cout << a << "\n";
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}