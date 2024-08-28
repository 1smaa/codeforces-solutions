#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll cnt=0;
    set<ll>st;
    ll dy=0;
    unordered_map<ll,ll>ump;
    ll dx = unique(a.begin(),a.end())-a.begin();
    for(int i=0;i<dx;i++)
    {
        while(a[i]-a[cnt]>=n)
        {
            cnt++;
        }
        dy = max(dy,i-cnt+1);
    }
    cout<<dy<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}