#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int i, int j){

    if(i > j) return true;

    if(str[i] != str[j]){
        return false;
    }else{
        i++;
        j--;
        return checkPalindrome(str, i, j);
    }
}

int main(){

    string str = "ramkumar";
    cout << str.length() << endl;
    cout << str[0] << endl;
    cout << str[7] << endl;

    bool ans = checkPalindrome(str, 0, str.length()-1);

    if(ans){
        cout << "Palindrome " << endl;
    }else{
        cout << "Not palindrome " << endl;
    }
    return 0;
}