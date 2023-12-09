#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, x;
    cin>>n>>x;

    vector<ll> coins(n);
    for(int i=0;i<n;i++)
        cin>>coins[i];

    vector<ll> dp(x+1, INT_MAX);
    dp[0] = 0;

    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<n;j++)
        {
            ll newNum=i+coins[j];
            if(newNum<=x)
                dp[newNum] = min(dp[newNum], dp[i]+1);
        }
    }    
    if(dp[x]!=INT_MAX)
        cout<<dp[x]<<endl;
    else
        cout<<-1<<endl;
    return 0;
}