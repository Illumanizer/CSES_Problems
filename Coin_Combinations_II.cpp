#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;

int main()
{
    ll n,x;
    cin>>n>>x;

    vector<ll> coins(n);
    for(ll i=0;i<n;i++)
        cin>>coins[i];

    vector<ll> dp(x+1,-1);
    dp[0]=1;

    for(ll i=0;i<=x;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(i-coins[j]>=0 )
                dp[i]=(dp[i-coins[j]]+dp[i])%mod;
        }
    }
    cout<<dp[x]<<endl;
    return 0;
}