#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;

int f(ll x,vector<ll> &dp)
{
    if(x<0) return 0;
    if(x==0) return 1;
    if(dp[x]!=-1) return dp[x];
    ll sum=0;
    for(int i=1;i<=6;i++)
    {
        sum=(sum+f(x-i,dp))%mod;
    }
    return dp[x]=sum;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> dp(1e6+7,0);
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(i-j>=0)
            {
                dp[i]=(dp[i]+dp[i-j])%mod;
            }
        }
    }

    cout << dp[n] << endl;
    return 0;
}