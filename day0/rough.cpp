#include <iostream>
#include <cstring>
using namespace std;

class Hero
{

private:
    int health;

public:
    char level;
    char *name;
    static int timeToComplete;

    Hero()
    {
        cout << "Contructor is called " << endl;
        name = new char[100];
    }
    // parameterized constructor
    Hero(int health)
    {
        this->health = health;
    }
    Hero(int health, char level)
    {
        cout << "Constructor with two parameter " << endl;
        this->level = level;
        this->health = health;
    }

    Hero(Hero &temp)
    {
        // cout << "copy constructor is called " << endl;
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }
    void print()
    {
        cout << endl;
        cout << " [ Name : " << this->name << " ,";
        cout << "Health : " << this->health << " ,";
        cout << "Level " << this->level << " ]" << endl;
        cout << endl;
    }

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

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    static void random()
    {
        cout << "this is static function here " << endl;
        cout << timeToComplete << endl;
    }

    // Destructor
    ~Hero()
    {
        cout << "Destrutor is called here " << endl;
    }
};

int Hero ::timeToComplete = 5;

int main()
{

    Hero::random();

    
    // cout << Hero::timeToComplete << endl;

    // Hero a;
    // cout << a.timeToComplete << endl;

    // Hero b;
    // b.timeToComplete = 10;
    // cout << a.timeToComplete << endl;
    // cout << b.timeToComplete << endl;

    // static
    // Hero a;

    // // dynamic
    // Hero *b = new Hero();
    // delete b;

    // Hero hero1;
    // hero1.setHealth(100);
    // hero1.setLevel('A');
    // char name[7] = "Babbar";
    // hero1.setName(name);

    // hero1.print();

    // use default copy constructor

    // Hero hero2(hero1);
    // hero2.print();
    // hero1.name[0] = 'G';
    // hero1.print();
    // hero2.print();

    // hero1 = hero2;
    // hero1.print();
    // hero2.print();

    // Hero S(70, 'C');
    // S.print();

    // copy construtor is called here
    // Hero R(S);
    // R.print();

    // cout << R.getHealth() << endl;
    // cout << R.level << endl;

    // Hero tt;
    // // statically declared
    // Hero ramesh(10);
    // ramesh.print();

    // Hero * h = new Hero(11);
    // h->print();

    // Hero temp(22, 'B');
    // temp.print();

    // dynamically declared
    // cout << "Address of ramesh " << &ramesh << endl;
    // Hero *b = new Hero;

    // dynamically allocated
    // Hero *b = new Hero;
    // b->setHealth(100);
    // b->setLevel('A');

    // cout << "level is " << (*b).level << endl;
    // cout << "level is " << (*b).getHealth() << endl;

    // cout << "level is " << b->level << endl;
    // cout << "level is " << b->getHealth() << endl;

    // cout << sizeof(b) << endl;

    // statically allocation
    // Hero a ;

    // Hero ramesh;

    // cout << "Size of ramesh is " << sizeof(ramesh) << endl;

    // ramesh.setHealth(20);
    // ramesh.level = 'C';

    // cout << ramesh.getHealth() << endl;
    // cout << ramesh.level << endl;
    // ramesh.print();

    // cout << ramesh.value << endl;

    // cout << sizeof(ramesh) << endl;
    // return 0;
}