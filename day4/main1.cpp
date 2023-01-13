#include <iostream>
using namespace std;

class Hero{


    // properties
    public:
    char name[100];
    int health;
    char level;

    void print(){
        cout << level << endl;
    }

};

int main()
{
    Hero ramesh;
    ramesh.health = 199;
    ramesh.level = 'A';

    cout << "Health is : " << ramesh.health << endl;
    cout << "Name is : " << ramesh.name << endl;
    cout << "Level is : " << ramesh.level << endl;
    
    // cout << h1.health << endl;
    // cout << "Size of " << sizeof(h1) << endl;


    return 0;
}