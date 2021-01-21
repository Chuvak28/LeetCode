#include <iostream>
#include <vector>
#include <climits>

using namespace std;


bool isPalindrome(int x)
{
    if(x<0)
        return false;
    int rev = 0;
    int k=x;
    while (x != 0)
    {
        int digit = x % 10;
        x /= 10;
        if (rev > INT_MAX/10 || (rev == INT_MAX / 10)) return false;
        rev = rev * 10 + digit;
    }

    if(rev==k)
    {
        return true;
    }

    return false;

}

int main()
{
    int k;
    cin >> k;
    bool b;
    b=isPalindrome(k);
    cout << b;

    return 0;
}
