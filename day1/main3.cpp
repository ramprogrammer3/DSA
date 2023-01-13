// #include <iostream>
// // #include "Hero.cpp"
// using namespace std;

// class Hero{

//     // property
//     public:

//     char name[50];
//     int health;
//     private:
//     char level;

//     void print(){
//         cout << level << endl;
//     }

// };

// int main(){

//     // created object
//     Hero ramesh;

//     cout << "health is " << ramesh.health << endl;
//     cout << "name is " << ramesh.name << endl;

//     // cout << "level is " << ramesh.level << endl;

//     // cout << "size of h1 " << sizeof(h1) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Hero
// {

// private:
//     int health;

// public:
//     char level;

//     int getHealth()
//     {
//         return health;
//     }

//     char getLevel()
//     {
//         return level;
//     }

//     void setHealth(int h)
//     {
//         health = h;
//     }

//     void setLevel(char ch)
//     {
//         level = ch;
//     }
// };

// int main()
// {

// static allocation
// Hero ramesh;

// Hero *b = new Hero;

// b->setLevel('A');
// b->setHealth(100);

// cout << "Level is " << (*b).level << endl;

// cout << "health is " << (*b).getHealth() << endl;

// cout << "Level is " << b->level << endl;

// cout << "health is " << b->getHealth() << endl;

// cout << sizeof(ramesh) << endl;

// ramesh.setHealth(100);

// ramesh.setLevel('C');

// cout << "ramesh health is " << ramesh.getHealth() << endl;

// cout << "ramesh level is " << ramesh.level << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

class Hero
{

private:
    int health;

public:
    char level;

    // creating constructor

     int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    Hero()
    {
        cout << "simple Constructor is called " << endl;
    }

    Hero (int health){
        this -> health = health;
    }

    Hero (int health, char level){
        this ->level = level;
        this -> health = health;
    }

    void print(){
        cout <<this-> level << endl;
        cout << this-> health << endl;
    }
};

int main()
{

    Hero suresh(100,'A');
    suresh.print();



    Hero ritesh(suresh);
    ritesh.print();

    // suresh.setHealth(100);
    // suresh.setLevel('C');



    // cout << "Suresh health is " << suresh.getHealth() << endl;

    // cout << "Suresh level is " << suresh.level << endl;


    






    // cout << "Hi " << endl;

    // Hero ramesh(10);
    // ramesh.print();

    // Hero *h = new Hero(11);
    // h->print();
    // Hero temp(12,'c');
    // temp.print();
   

    // cout << "Address of ramesh " << &ramesh << endl;

    

    // cout << "hello " << endl;
    return 0;
}