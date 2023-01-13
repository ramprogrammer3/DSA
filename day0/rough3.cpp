#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "Speaking " << endl;
    }
};

class Dog : public Animal
{
};

class GermanShepherd : public Dog
{
};

int main()
{

    GermanShepherd g;
    g.speak();
    cout << g.age << endl;
    cout << g.weight << endl;

    // Dog d;
    // d.speak();
    // cout << d.age << endl;
    // cout << d.weight << endl;

    return 0;
}
