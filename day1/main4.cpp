#include <iostream>
using namespace std;

class Hero{

    // properties
    private:
    int health;
    public:
    char level;

    void print(){
        cout << level << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }
    
    void setLevel(char ch){
        level = ch;
    }
};

int main(){


    // dynamically object creation
    Hero *b = new Hero;

    cout << "Level is " << (*b).level << endl;
    cout << "health is " << (*b).getHealth() << endl;







    // creation of object
    // Hero ramesh;

    // cout << "sizeof ramesh is  " <<  sizeof(ramesh) << endl;
    // ramesh.setHealth(100);
    // ramesh.setLevel('A');

    // cout << "ramesh health is " << ramesh.getHealth() << endl;
    // cout << "ramesh level is " << ramesh.getLevel() << endl;




    // ramesh.health = 70;
    // ramesh.level = 'R';
    
    // cout << ramesh.health << endl;
    // cout << ramesh.level << endl;



    // cout << sizeof(h1) << endl;
    

    return 0;

}