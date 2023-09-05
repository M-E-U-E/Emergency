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
    int n, x;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0;
    ll ans = 0;
    for(int i=1; i<31; i++)
    {
        int x =(1<<i);
        ll c = 0;
        for(int j=0; j<n; j++)
        {


            if(x>a[j])
            {
                c++;
            }
        }
        x = c-sum;
        sum = c;

        ans+=(x*(x-1))/2;

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
