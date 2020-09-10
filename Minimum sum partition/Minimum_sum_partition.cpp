#include <iostream>
#include <vector>
using namespace std;
typedef long long int lli;

int func(vector<lli> &V, lli s, lli e, lli sum, lli cur, vector<vector<lli>> &dp)
{
    if (s > e)
    {
        return abs((sum - cur) - cur);
    }
    if (dp[cur + V[s]][s + 1] == -1)
    {
        dp[cur + V[s]][s + 1] = func(V, s + 1, e, sum, cur + V[s], dp);
    }
    if (dp[cur][s + 1] == -1)
    {
        dp[cur][s + 1] = func(V, s + 1, e, sum, cur, dp);
    }
    return min(dp[cur + V[s]][s + 1], dp[cur][s + 1]);
}

int main()
{
    lli testcases;
    cin >> testcases;
    for (lli i = 0; i < testcases; i++)
    {
        int noe;
        cin >> noe;
        vector<lli> v(noe);
        lli sum = 0;
        for (lli j = 0; j < noe; j++)
        {
            cin >> v[j];
            sum += v[j];
        }
        vector<vector<lli>> dp(sum + 2, vector<lli>(noe + 2, -1));
        for (lli x : dp)
        {
            cout << x << endl;
        }
        func(v, 0, noe - 1, sum, 0, dp);
    }
    return 0;
}