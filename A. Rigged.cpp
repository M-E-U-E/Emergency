#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
bool cmp(pair<int,int>a,pair<int,int> b)
{
    if(a.first > b.first)
        return true;
    else if(a.first == b.first and a.second<b.second)
        return true;

    return false;
}
void solve()
{
    ll n;
    cin >> n;
    ll a[n+5], b[n+6];
    vector<ll> v, v1;
    for(int i=0; i<n; i++)
    {
        cin >> a[i] >> b[i];
        if(a[i]>b[i])
        {
            v.push_back(b[i]);
            v1.push_back(a[i]);
        }
    }
    ll p1 = a[0];
    ll p2 = b[0];
    ll ans = p1;
    for(int i=1; i<n; i++)
    {
        if(a[i]>=p1 && b[i]>=p2)
        {
            ans = -1;
            break;
        }
    }
    cout << ans << endl;
    

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        solve();

    }
    return 0;
}

