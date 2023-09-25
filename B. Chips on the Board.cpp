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
    ll c1=0, c2=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        c1+=a[i];
    }
        for(int i=0; i<n; i++)
    {
        cin >>  b[i];
        c2+=b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    ll mina = a[0];
    ll minb = b[0];
    mina *= n;
    minb *= n;
    ll p = mina+c2;
    ll q = minb+c1;
    cout << min(p,q) << endl;
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


