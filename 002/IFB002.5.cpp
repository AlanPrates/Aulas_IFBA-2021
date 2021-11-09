#include <iostream>
using namespace std;
int main()
{
    int nota;
    cout << "Digite a nota : ";
    cin >> nota;
    if (nota >= 90 && nota <= 100)
        cout << "A" << endl;
    if (nota >= 80 && nota < 90)
        cout << "B" << endl;
    if (nota >= 70 && nota < 80)
        cout << "C" << endl;
    if (nota >= 60 && nota < 70)
        cout << "D" << endl;
    if (nota < 60)
        cout << "R" << endl;
    return 0;
}