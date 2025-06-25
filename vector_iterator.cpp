#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};

    // this is not iterator
    // for (int x : v)
    // {
    //     cout << x << endl;
    // }

    for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}