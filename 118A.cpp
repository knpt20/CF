#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    string vowels = "aoyeui";
    char c;
    while (cin >> c)
        if (vowels.find(c = tolower(c)) == string::npos)
            cout << '.' << c;


    return 0;
}
