#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solvehere()
{
    ll n;
    cin >> n;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum += x;
    }
    if (sum < 0)
    {
        sum *= (-1);
    }
    cout << sum << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //#endif

    ll ttt = 1;
    cin >> ttt;
    while (ttt--)
    {
        solvehere();
    }
    return 0;
}
