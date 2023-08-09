//ok
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll a[n+5];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ll c=0;
    ll x = a[n-1];
    ll i = n-1;
    ll ans = 0;
    while(i>=0)
    {
        while(a[i]==x && i>=0)
        {
            c++;
            i--;
        }
        if(i<0)
        {
            break;
        }
        ans++;
        i -= c;
        c *= 2;
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


