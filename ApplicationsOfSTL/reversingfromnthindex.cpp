#include <iostream>
#include <vector>
using namespace std;

vector<int> reversed(vector<int> v, int in)
{
    int s = in;
    int e = v.size() - 1;
    while(s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}


void print(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    int index;
    cout << "Index from which vector is to be rotated: ";
    cin >> index;

    vector<int> ans = reversed(v, index + 1);

    print(ans);
}