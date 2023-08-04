#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string c = "";
    c += s[0];
    if(s[0]==s[1] || s[1]>s[0])
    {
        cout << c;
        reverse(c.begin(),c.end());
        cout << c << endl;
    }
    else
    {
        for(int i=1; i<n; i++)
        {
            if(s[i]<=s[i-1])
            {
                c += s[i];
            }
            else
            {
                break;
            }
        }
    }
    cout << c;
    reverse(c.begin(),c.end());
    cout << c << endl;

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

