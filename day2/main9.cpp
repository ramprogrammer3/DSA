
#include <iostream>
using namespace std;

int main(){

    int num = 5;
    
    cout << num << endl;

    cout << "address of num is " << &num << endl;

    int *ptr = &num;
    cout << "Value is " << *ptr << endl;
    cout << " Address  is " << ptr << endl;


    return 0;
}