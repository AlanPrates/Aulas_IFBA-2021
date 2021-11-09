#include <iostream>
using namespace std;
int main()
{
    int produto = 2;
    while (produto <= 1000)
    {
        cout << produto << endl;
        produto = 2 * produto;
    }
    cout << produto << endl;
    return 0;
}