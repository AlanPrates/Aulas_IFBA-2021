// Fig. 2.17: fig02 17.cpp
// Repeti��o controlada por contador com a estrutura for

#include <iostream>

 using std::cout;
 using std::endl;

int main ( )
{
    // inicializa��o, condi��o de repeti��o e incremento
    // est�o todas inclu�das no cabe�alho da estrutura for.

  for ( int counter = 1; counter <= 10; counter++)
     cout << counter << endl;

  return 0;
}

