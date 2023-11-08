#include <bits/stdc++.h>
using namespace std;

void mainSolve(int test = 1)
{
    long long n;
    cin>>n;

    long long sum=0;
    for(int i=0;i<n-1;i++)
    {
        long long x;
        cin>>x;
        sum+=x;
    }

    long long expected_sum = (n*(n+1))/2;
    cout<<expected_sum-sum;
}
int main()
{

    // int t;
    // cin >> t;
    // int i = 1;
    // while (i <= t)
    // {
    //     mainSolve(i);
    //     i++;
    // }

    mainSolve();
    return 0;
}