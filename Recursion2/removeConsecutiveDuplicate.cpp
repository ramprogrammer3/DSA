#include <iostream>
using namespace std;

void removeDuplicate(char* ch){

    if(ch[0] == '\0'){
       
        return;
    }
    if(ch[0] == ch[1]){
        int i = 0;

        while(ch[i] != '\0'){
            ch[i] = ch[i+1];
            i++;
        }
        removeDuplicate(ch);
    }
    removeDuplicate(ch + 1);
}

int main(){

    char str[] = "abbccbscdd";
    removeDuplicate(str);
    cout << str << endl;




    return 0;
}