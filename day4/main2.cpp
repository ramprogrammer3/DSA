#include <iostream>
#include <cstring>
using namespace std;

class Hero{

    private:

    int health;

    public:
    char level;
    char *name;

    Hero(){
        cout << "Constructor is called " << endl;
        name = new char[100];
    }

    Hero(int health){
        
        this->health = health;

    }
    Hero(int health, char level){

        this->health = health;
        this->level = level;

    }

    // copy constructor is created below
    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch , temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << endl;
        cout << "[ name : " << this-> name << " ,";
        cout << "health : " << this->health << " ,";
        cout << "level : " << this->level << " ]" << endl;
        cout <<endl;
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

    void setLeve(char ch){
        level = ch;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    ~Hero(){
        cout << "Destrutor bhai called " << endl;
    }

};

int main(){

    // static
    Hero a;

    // Dynamic
    Hero *b = new Hero();
    // manually destructor call
    delete b;



    //   Hero hero1;
    //   hero1.setHealth(19);
    //   hero1.setLeve('A');
    //   char name[7] = "Babbar";
    //   hero1.setName(name);
    // //   hero1.print();

    //   Hero hero2(hero1);
    // //   hero2.print();

    //   hero1.name[0] = 'G';
    //   hero1.print();

    //   hero2.print();

    //   hero1 = hero2;
    //   hero1.print();

    // Hero suresh(100,'c');
    // suresh.print();
    // cout << "below is suresh " << endl;

    // // copy constructor is created 
    // Hero ritesh(suresh);
    // ritesh.print();


    // object create statically

    // Hero ramesh(100);
    // cout << "address of ramesh " << &ramesh << endl;
    // cout << "health of ramesh is " << ramesh.getHealth() << endl;

    // Hero *b = new Hero(80,'c');
    // cout << "address of b is " << b << endl;


    // creating object

    // static allocation
    // Hero a;
    // a.setHealth(100);
    // a.setLeve('A');
    // cout << "level is " << a.level << endl;
    // cout << "Health is " << a.getHealth() << endl;

    // // dynamically allocation
    // Hero *b = new Hero;
    // b->setHealth(50);
    // b->setLeve('C');
    // cout << "level is " << (*b).level << endl;
    // cout << "Health is " << (*b).getHealth() << endl;

    // cout << "level is " << b->level << endl;
    // cout << "health is " << b->getHealth() << endl;


    // Hero ramesh;
    // cout << "Ramesh health is " << ramesh.getHealth() << endl;
    // ramesh.setHealth(100);
    // cout << "Ramesh health is " << ramesh.getHealth() << endl;

    // cout << "Size of ramesh is " << sizeof(ramesh) << endl;


    return 0;
}