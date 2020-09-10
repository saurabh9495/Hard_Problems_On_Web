#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        string str;
        cin >> str;
        int result = 0;
        stack<int> s;
        s.push(-1);
        for (int j = 0; j < str.length(); j++)
        {
            if (str[j] == '(')
            {
                s.push(j);
            }
            else
            {
                int c = s.top();
                s.pop();
                if (!s.empty())
                {
                    int diff = j - s.top();
                    result = max(result, diff);
                }
                else
                {
                    s.push(j);
                }
            }
        }
        cout << result << endl;
    }
    return 0;
}