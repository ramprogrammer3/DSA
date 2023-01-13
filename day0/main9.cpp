// #include <iostream>
// using namespace std;
// void reverse(char name[],int n){
//     int s = 0;
//     int e = n - 1;
//     while(s<=e){
//         swap(name[s++],name[e--]);
//     }
// }
// int getLength(char name[]){
//     int count = 0;
//     for(int i = 0; name[i] != '\0'; i++){
//         count++;
//     }
//     return count;
// }
// // void printString(char name[]){
// //     for(int i = 0; name[i] != '\0';i++){
// //         cout << name[i];
// //     }
// // }
// int main(){
//     char name[20];
//     cout << "Enter your name ";
//     cin >> name;
//     // name[2] = '\0';
//     // cout << "Your name is " << name << endl;
//     // cout << "Length of string is " << getLength(name) << endl;
//     int length = getLength(name);
//     reverse(name,length);
//     cout << name << endl;
//     // printString(name);
//     cout << "The reverse of string is " << name << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;
// bool checkPalindrome(char arr[]){
//     int length = 0;
//     for(int i = 0; arr[i]!='\0';i++){
//         length++;
//     }
//     int s = 0, e = length -1;
//     while(s<=e){
//         if(arr[s]!=arr[e])return 0;
//         s++;
//         e--;
//     }
//     return 1;
// }
// int main(){
//     char str[20];
//     cout << "Enter String : ";
//     cin >> str;
//     if(checkPalindrome(str)){
//         cout << "String is a palindrome " << endl;
//     }else{
//         cout << "String is not a palindrome ";
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// char toLowerCase(char ch){
//     if(ch >='a'&& ch<='z'){
//         return ch;
//     }else{
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }
// int main(){
//     cout << "Uppercase character " << toLowerCase('R') << endl;
//     cout << "Lowercase character " << toLowerCase('a') << endl;
//     return 0;
// }  


