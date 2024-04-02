#include <bits/stdc++.h>
using namespace std;


bool isPalindrome(vector<int> v)
{

    int s = v.size();
    for (int i = 0; i < s; i++)
    {
        if (v[i] != v[s - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int flag = 0;
        int a, b;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr[n - i - 1])
            {
                a = arr[i];
                b = arr[n - i - 1];
                flag = 1;
            }
        }

        if (flag == 0)
        {
            cout << "YES" << '\n';
            continue;
        }

        vector<int> v1, v2;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != a)
            {
                v1.push_back(arr[i]);
            }
            if (arr[i] != b)
            {
                v2.push_back(arr[i]);
            }
        }
        bool ans1 = isPalindrome(v1);
        bool ans2 = isPalindrome(v2);
        if (ans1 == true or ans2 == true)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}