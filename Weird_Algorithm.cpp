#include <bits/stdc++.h>
using namespace std;

void mainSolve(int test = 1)
{
    long long n;
    cin >> n;

    cout << n << " ";
    while (n != 1)
    {
        if (n & 1)
            n = n * 3 + 1;
        else
            n /= 2;
        cout << n << " ";
    }
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