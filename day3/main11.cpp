#include <iostream>
using namespace std;

bool checkPalindrome(string &str, int i, int j)
{

    if (i > j)
        return true;

    if (str[i] != str[j])
        return false;

    else
    {
        i++;
        j--;
        return checkPalindrome(str, i, j);
    }
}

int main()
{
    string str = "abba";
    bool isPalindrome =  checkPalindrome(str, 0, str.length()-1);

    if(isPalindrome){
        cout << "Its a palindrome" << endl;
    }else{
        cout << "Its not a palindrome" << endl;
    }
    return 0;
}