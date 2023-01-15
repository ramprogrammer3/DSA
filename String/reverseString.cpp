
/*
#include <iostream>
#include <string>
using namespace std;

void reverseStr(string &str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[(n - i - 1)]);
    }
}
void printStr(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
    }
    cout << endl;
}

int main()
{
    string str = "palak";
    reverseStr(str);
    printStr(str);

    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;

void printStr(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
    }
    cout << endl;
}

/*

void reverseString(string& str){

    int i = 0;
    int j = str.length() -1;

    while(i < j){
        swap(str[i], str[j]);
        i++;
        j--;
    }
}

*/

string reverseString(string str)
{

    if (str.length() == 1)
        return;

    reverseString(str.substr(1));
    cout << str[0];
}

int main()
{

    string str = "rammaniyari";
    string ans = reverseString(str);
    // printStr(str);
    cout << ans << endl;

    return 0;
}
