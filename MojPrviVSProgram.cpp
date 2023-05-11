#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string* str = new string[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin, str[i]);
    }
    sort(str, str + n);
    fstream file;
    file.open("imenik.txt", ios::app | ios::out);
    for (int i = 0; i < n; i++)
    {
        file << str[i] << endl;
    }
    file.close();
    return 0;
}