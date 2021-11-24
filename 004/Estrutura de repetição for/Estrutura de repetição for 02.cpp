// Fig. 2.17: fig02 17.cpp
// Repetição controlada por contador com a estrutura for

#include <iostream>

 using std::cout;
 using std::endl;

int main ( )
{
    // inicialização, condição de repetição e incremento
    // estão todas incluídas no cabeçalho da estrutura for.

  for ( int counter = 1; counter <= 10; counter++)
     cout << counter << endl;

  return 0;
}

