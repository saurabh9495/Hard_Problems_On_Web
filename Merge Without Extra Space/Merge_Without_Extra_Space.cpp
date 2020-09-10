#include <iostream>
#include <algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;
typedef long long int lli;
int main()
{
    auto start = high_resolution_clock::now();
    lli testcases;
    cin >> testcases;
    for (lli i = 0; i < testcases; i++)
    {
        lli noea, noeb;
        cin >> noea >> noeb;
        lli arr[noea + noeb], arr1[noea], arr2[noeb];
        for (lli j = 0; j < noea + noeb; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr + noea + noeb);
        for (lli k = 0; k < noea + noeb; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() << endl;
    return 0;
}