#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;

ll maxInt(ll n){
    ll maxi=0;
    while(n>0){
        maxi=max(maxi,n%10);
        n/=10;
    }
    return maxi;
}
int main()
{
    ll n;
    cin>>n;
    ll count=0;
    while(n!=0){
        n-=maxInt(n);
        count++;
    }
    cout<<count<<endl;
    return 0;
}