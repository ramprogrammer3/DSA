#include <bits/stdc++.h>
using namespace std;


bool solve(string str, int i, int j){

    if(i > j) return true;

    if(str[i] != str[j]){
        return false;
    }else{
        i++;
        j--;
        return solve(str,i,j);
    }
}

int main(){

    char ch[] = {'a', 'b', 'c','4','b','a'};

    int n = strlen(ch);


    bool ans = solve(ch, 0,n-1 );

    if(ans){
        cout << "valid palindrome " << endl;
    }else{
        cout << "not palindrome " << endl;
    }



    return 0;
}