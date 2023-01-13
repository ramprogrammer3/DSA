#include <iostream>
using namespace std;

void printArray(){

}

int main(){
    // declare
    int num[15];

    // cout << "Value at 0 index " <<num[0] << endl;
    // cout << "Value at 1 index " <<num[1] << endl;
    // cout << "Value at 5 index " <<num[5] << endl;
    // cout << "Value at 6 index " <<num[6] << endl;
    // cout << "Value at 28 index " <<num[25] << endl;
    // cout << "Sab sahi hai" << endl;

    int number[5] = {5,7,11};

    for(int i = 0; i<5; i++){
        cout << number[i] << " ";
    }
    cout << endl;
    int second[10] = {0};

     for(int i = 0; i<10; i++){
        cout << second[i] << " ";
    }

    return 0;
}