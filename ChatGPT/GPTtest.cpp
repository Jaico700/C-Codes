#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int place = 1;

    while (n != 0)
    {
        int digit = n & 1;
        ans += digit * place;
        place *= 10;
        n >>= 1;
    }

    cout << ans;
}
