#include <iostream>
#include <vector>
using namespace std;
#define M 100005
typedef long long int lli;

int main()
{
    lli testcases, number;
    cin >> testcases;
    vector<lli> v;
    v.push_back(1);
    lli i2 = 0, i3 = 0, i5 = 0;
    lli n2 = 2, n3 = 3, n5 = 5;
    lli ii, min_of_three;
    for (lli j = 1; j < M; j++)
    {
        min_of_three = min(min(n2, n3), n5);
        v.push_back(min_of_three);
        if (min_of_three == n2)
        {
            i2 += 1;
            n2 = v[i2] * 2;
        }
        if (min_of_three == n3)
        {
            i3 += 1;
            n3 = v[i3] * 3;
        }
        if (min_of_three == n5)
        {
            i5 += 1;
            n5 = v[i5] * 5;
        }
    }
    for (lli i = 0; i < testcases; i++)
    {
        cin >> number;
        cout << v[number - 1] << endl;
    }
    return 0;
}