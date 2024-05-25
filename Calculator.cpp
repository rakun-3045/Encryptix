#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
using namespace std;
int main()
{   fast_io;
    cout << "Welcome to the calculator" << endl;
    ;
    int t;
    cout << "Enter number of operations you wish to perfom right now: " << endl;
    cin >> t;
    while (t--)
    {
        int n1, n2;

        char s;
        cout << "Enter the operation you want to do on two numbers : " << endl;
        cin >> n1 >> s >> n2;

        long double l = 0;
        if (s == '+')
        {
            l = n1 + n2;
        }
        else if (s == '-')
        {
            l = n1 - n2;
        }
        else if (s == '*')
        {
            l = n1 * n2;
        }
        else if (s == '/')
        {
            if (n2 == 0)
            {
                cout << "Invalid: Division by 0 " << endl;
            }
            else
            {
                l = n1 / n2;
            }
        }
        cout << l << endl;
    }
    return 0;
}