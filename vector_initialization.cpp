#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v; // type 1

    // vector<int> v(10); // type 2

    // vector<int> v(10, -2); // type 3

    // vector<int> v2(v); // type 4

    int a[5] = {1, 2, 3, 4, 5};

    vector<int> v2(a, a+5); // type 5

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << endl;
    }
    return 0;
}