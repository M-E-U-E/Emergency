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
    ll n, m, x;
    cin >> n >> x >> m;
    ll c=0;
    ll l = x, r = x;
    for(int i=0; i<m; i++)
    {
        ll a, b;
        cin >> a >> b;
        if(b<l || a>r)
        {
            continue;
        }
        else
        {
            l = min(l,a);
            r = max(r,b);
        }
    }
    c = r-l;
    cout << c+1 << endl;
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

