#include <iostream>
using namespace std;
int main()
{
    int nota;
    cout << "Digite a nota : ";
    cin >> nota;
    if (nota >= 90)
        cout << "A" << endl;
    else
        if (nota >= 80)
            cout << "B" << endl;
        else
            if (nota >= 70)
                cout << "C" << endl;
            else
                if (nota >= 60)
                    cout << "D" << endl;
                else
                    cout << "R" << endl;
    return 0;
}