// My solution
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll k;
        cin >> k;
        ll l = 0, r = 1e9;
        while (l < r)
        {
            ll mid = (l + r) >> 1;
            ll sum = mid * mid + mid;
            if (sum >= k)
                r = mid;
            else
                l = mid + 1;
        }
        cout << k + l << "\n";
    }
    return 0;
}

/*solution1 of tutorial

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll k;
        cin >> k;
        ll l = 0, r = 2e18;
        while (l < r)
        {
            ll mid = (l + r) >> 1;
            if (mid - (ll)sqrtl(mid) >= k)
                r = mid;
            else
                l = mid + 1;
        }
        cout << l << "\n";
    }
    return 0;
}

*/

/* solution2 of tutorial

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long k;
        cin >> k;
        cout << k + int(sqrtl(k) + 0.5) << "\n";
    }
    return 0;
}
*/