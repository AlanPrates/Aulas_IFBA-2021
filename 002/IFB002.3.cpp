#include <iostream>
using namespace std;
int main()
{
    int nota;
    cout << "Digite a nota : ";
    cin >> nota;
    if (nota >= 60)
        cout << "APROVADO" << endl;
    if (nota < 60)
        cout << "REPROVADO" << endl;
    return 0;
}