 // Fig. 2.16: fig02 16.cpp
 // Repetição controlada por contador 3 #include <iostream>
 #include <iostream>

 using std::cout;
 using std::endl;

 int main()
{
    int counter = 1;               // inicialização

    while ( counter <= 10) {       // condição de repetição
       cout << counter << endl;
       ++counter;                  // incremento

    }
    return 0;
}
