#include <bits/stdc++.h>
using namespace std;
#define ll long long
//这道题有几个注意点
//第一个是某点可能即使x方向的边界也是y方向的边界
//第二个是边界可能不止一个
//如果不移动的n-1个方块正好填满一片矩形区域
//需要另加一行来存放移动过来的那个方块
//这一行应该是原来矩形的较短边
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    if(n==1){
        cout<<1<<"\n";
        return;
    }
    int px1=min_element(a.begin(),a.end())-a.begin();
    int px2=max_element(a.begin(),a.end())-a.begin();
    int py1=min_element(b.begin(),b.end())-b.begin();
    int py2=max_element(b.begin(),b.end())-b.begin();
    ll ans=1e18;
    for(int d:{px1,px2,py1,py2}){
        int minx=1e9;
        int maxx=0;
        int miny=1e9;
        int maxy=0;
        for(int i=0;i<n;i++){
            if(i!=d){
                minx=min(minx,a[i]);
                maxx=max(maxx,a[i]);
                miny=min(miny,b[i]);
                maxy=max(maxy,b[i]);
            }
        }
        ll s=1LL*(maxx-minx+1)*(maxy-miny+1);
        ll res=0;
        if(s<=n-1){
            res=1LL*(maxx-minx+1)*(maxy-miny+1)+min((maxx-minx+1),(maxy-miny+1));
        }else{
            res=s;
        }
        ans=min(ans,res);
    }
    cout<<ans<<"\n";
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
