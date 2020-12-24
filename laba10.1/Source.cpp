#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

bool Contain();

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "ื่ บ 'abc' t.txt: " << Contain() << endl;
    if (Contain())
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}
bool Contain()
{
    ifstream t("t.txt");
    string s;

    int j = 0;
    char q[] = "abc";

    getline(t, s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (((s[i] == q[j] && s[i + 1] == q[j + 1])));
            return true;
    }
    return false;
}

