#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout << "Vector Size: " << v.size() << endl;
    cout << "Vector Capacity: " << v.capacity() << endl;
    cout << "Vector Max Size: " << v.max_size() << endl;

    v.clear();
    v.empty() ? cout << "Empty" << endl : cout << "Not Empty" << endl;

    v.resize(10);
    cout << "Vector Size Resize: " << v.size() << endl;

    return 0;
}
