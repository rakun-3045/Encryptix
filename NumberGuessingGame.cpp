#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
using namespace std;
int main()
{   fast_io;
    srand((unsigned)time(NULL));
    cout << '\t' << "Welcome to the Number Guessing Game" << endl;
    ll n;
    cout << "Enter the maximum number of digits the number in game can have: ";
    cin >> n;
    ll k = 1;
    for (int i = 0; i < n; i++)
    {
        k *= 10;
    }
    ll h = rand() % k;
    ll inp;
    cout << "Enter your guess: ";
    cin >> inp;
    bool flag;
    if (inp == h)
    {
        cout << "You guessed the correct number." << endl;
        flag = 0;
    }
    else if (inp > h)
    {
        cout << "You guessed too high." << endl;
        flag = 1;
    }
    else
    {
        cout << "You guessed too low." << endl;
        flag = 1;
    }
    while (flag)
    {
        cout << "Enter your guess: ";
        cin >> inp;
        if (inp == h)
        {
            cout << "You guessed the correct number." << endl;
            flag = 0;
        }
        else if (inp > h)
        {
            cout << "You guessed too high." << endl;
            flag = 1;
        }
        else
        {
            cout << "You guessed too low." << endl;
            flag = 1;
        }
    }

    return 0;
}