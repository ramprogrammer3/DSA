#include <iostream>
using namespace std;

class Student{

    private:
        string name;
        int age;
        int height;

        int getAge(){
            return this->age;
        }

};



int main(){

    Student first;
    cout << "Everything is fine here " << endl;


    return 0;
}