#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll q, d;
    cin >> q >> d;
    for(int i=0; i<q; i++)
    {
        ll x;
        cin >> x;
        ll f = 0;
        if(x >= d*10)
        {
            f = 1;
        }
        if(f==0)
        {
            while(x >= d)
            {
                if(x%d == 0)
                {
                    f = 1;
                    break;
                }
                x -= 10;
            }
        }
        if(f)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

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
