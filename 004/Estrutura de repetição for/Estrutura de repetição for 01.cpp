 // Fig. 2.16: fig02 16.cpp
 // Repeti��o controlada por contador 3 #include <iostream>
 #include <iostream>

 using std::cout;
 using std::endl;

 int main()
{
    int counter = 1;               // inicializa��o

    while ( counter <= 10) {       // condi��o de repeti��o
       cout << counter << endl;
       ++counter;                  // incremento

    }
    return 0;
}
