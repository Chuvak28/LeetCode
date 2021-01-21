#include <iostream>
#include <vector>
#include <climits>

using namespace std;


int reverse(int x) {
    int rev = 0;
    while (x != 0) {
        int digit = x % 10;
        x /= 10;
        if (rev > INT_MAX/10 || rev < INT_MIN/10) return 0;
        rev = rev * 10 + digit;
    }
    return rev;


}
int main()
{
    int k;
    cin >> k;
    cout << reverse(k);

    return 0;
}
