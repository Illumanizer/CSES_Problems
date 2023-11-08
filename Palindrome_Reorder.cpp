#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
const int MOD = 1e9;
 
#define read(x) \
    ll x;       \
    cin >> x; // reads long long
#define readstr(x) \
    string x;      \
    cin >> x; // reads string(word)
#define readLine(x) \
    string x;       \
    getline(cin, x); // reads string(sentence)
#define print(x) cout << (x) << " "
#define println(x) cout << (x) << endl
 
template <class T>
vector<T> readvector(T n)
{
    vector<T> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return arr;
} // vector<ll> arr = readvector(n);
template <class T>
void printvector(vector<T> arr, T n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
} // printvector(arr, n);
 
long long get_hash(string s)
{
    int n = s.size();
    long long h = 0;
    for (int i = 0; i < n; i++)
        h = (h * 31 + (s[i] - 'a' + 1)) % MOD;
    return h;
}
 
void mainSolve(int test = 1)
{
    string s;
    cin >> s;
 
    vector<int> a(26);
    for(char c : s) a[c - 'A']++;
    
    int check = 0;
    for(int i = 0; i < 26; i++) check += (a[i] % 2);
    //only one of the letters should be of odd frequency or all pair
    if(check > 1){
        cout << "NO SOLUTION";
        return ;
    }
    //organize the palindrome
    string result;
    for (int i = 0; i < 26; i++){
        if(!(a[i]%2)){
            for(int j = 0; j < a[i]/2; j++) result.push_back(i + 'A');
        }
    }
    for (int i = 0; i < 26; i++){
        if(a[i]%2){
            for(int j = 0; j < a[i]; j++) result.push_back(i + 'A');
        }
    }
    for (int i = 25; i >= 0; i--){
        if(!(a[i]%2)){
            for(int j = 0; j < a[i]/2; j++) result.push_back(i + 'A');
        }
    }
 
    cout << result << endl;
    
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