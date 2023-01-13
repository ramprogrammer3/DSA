#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{
    cout << "Step " << src << " Dest " << dest << endl;
    // base case
    if (src == dest)
    {
        cout << "reach home " << endl;
        return;
    }
    src++;
    reachHome(src, dest);
}

int main()
{
    int dest = 10;
    int src = 1;
    reachHome(src, dest);

    return 0;
}