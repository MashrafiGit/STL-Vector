#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2 = v;
    vector<int> v3 = {100, 200, 300};

    // v2.push_back(6);
    // v2.pop_back();

    // insert
    // v2.insert(v2.begin() + 2, v3.begin(), v3.end());

    // delete
    // v2.erase(v2.begin() + 2, v2.begin() + 5);

    // vector<int> v4 = {1, 6, 2, 6, 3, 6, 4, 5};
    // replace(v4.begin(), v4.end(), 6, 100);

    vector<int>::iterator it = find(v2.begin(), v2.end(), 20);

    if (it == v2.end())
        cout << "Not Found" << endl;
    else
        cout << "Found" << endl;


    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    return 0;
}