
// reverse string using recursion

// #include <iostream>
// using namespace std;

// void reverse(string &s, int i, int j)
// {

//     // base case
//     if (i > j)
//         return;

//     swap(s[i], s[j]);
//     i++;
//     j--;
//     reverse(s, i, j);
// }

// int main()
// {

//     string s = "abcde";
//     int j = s.length();
//     cout << j << endl;
//     cout << s << endl;
//     reverse(s, 0, j - 1);

//     cout << s << endl;

//     return 0;
// }

// check palindrome using recursin

// #include <iostream>
// using namespace std;

// bool checkPalindrome(string &s, int i, int j)
// {
//     // base condition
//     if (i > j)
//         return true;
//     if (s[i] != s[j])
//     {
//         return false;
//     }
//     else
//     {
//         // recursive call
//         i++;
//         j--;
//         return checkPalindrome(s, i, j);
//     }
// }
// int main()
// {
//     string s = "abbccbba";
//     int j = s.length() - 1;
//     bool ans = checkPalindrome(s, 0, j);
//     if (ans)
//     {
//         cout << "Palindrome " << endl;
//     }
//     else
//     {
//         cout << "Not Palindrome " << endl;
//     }
//     return 0;
// }


// find power using recursion

// #include <iostream>
// using namespace std;

// int power(int a, int b)
// {

//     if (a == 0)
//         return 0;

//     if (b == 0)
//         return 1;

//     if (b == 1)
//         return a;

//     int ans = power(a, b / 2);

//     if (b & 1)
//         return a * ans * ans;

//     else
//         return ans * ans;
// }

// int main()
// {
//     int a, b;

//     cin >> a >> b;

//     int ans = power(a, b);

//     cout << ans << endl;

//     return 0;
// }


// #include <iostream>

// using namespace std;

// int main(){

    
//     return 0;
// }