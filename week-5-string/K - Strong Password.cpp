#include <iostream>

using namespace std;

int main()
{
    string s;

    getline(cin, s);

    bool a = false, b = false, c = false, d = false, e = false;
    if (s.size() == 10)
    {

        a = true;
    }
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            b = true;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {

            c = true;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {

            d = true;
        }
        else
        {
            e = true;
        }
    }
    if (a && b && c && d && e)
    {
        cout << "Strong";
    }
    else
    {
        cout << "Weak";
    }
}