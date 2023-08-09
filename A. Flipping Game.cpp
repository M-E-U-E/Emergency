#include<bits/stdc++.h>
#define ll long long
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
    ll a[n+6];
    ll z=0, o=0, mx = 0;
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]==0)
        {
            z++;
        }
        else if(a[i]==1)
        {
            z--;
            o++;
        }
        if(z<0)
        {
            z = 0;
        }
        mx = max(mx,z);
    }
    if(mx==0)
    {
        cout << o-1 << endl;
    }
    else
    {
        cout << mx+o << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    {
        solve();

    }
    return 0;
}


