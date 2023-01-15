
/*
#include <iostream>
#include <cstring>
using namespace std;

void removeChar(char* s, char c){
    int len = strlen(s);
    int j = 0;
    for(int i = 0; i < len; i++){
        if(s[i] != c){
            s[j++] = s[i];
        }
    } 
    s[j] = '\0';
}

int main(){
    char s[] = "geeksforgeeks";
    removeChar(s,'g');
    cout << s << endl;

    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;

string removechar(string &word, char& ch){

    for(int i = 0; i<word.length(); i++){
        if(word[i] == ch){
            word.erase(word.begin()+i);
            i--;
        }
            
    }
    return word;
}

int main(){

    string word="geeksforgeeks";
    char ch='e';
    cout<<removechar(word,ch);

}