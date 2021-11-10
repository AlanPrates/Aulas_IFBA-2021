// Fig. 2.7
// Programa da média da turma com repetição controlada por contador.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int total,         //soma das notas
		gradeCounter,  //número de notas digitadas
		grade,		   //uma nota
		average;	   //média das notas

	// fase de inicialização
	total = 0;
	gradeCounter = 1;

	// fase de processamento
	while (gradeCounter <= 10 ) {		//repate 10 vezes
		cout << "Forneça a nota; ";		//solicite entrada de dados
		cin >> grade;					//lê nota digitada
		total = total + grade;			//soma nota digitada
		gradeCounter = gradeCounter + 1;//incrementa contador

	}

	// fase de término					
	average = total / 10;               //divisão inteira
	setlocale(LC_ALL, "Portuguese");
	cout << "A média da turma é " << average << endl;

	return 0;							// indica que programa terminou normalmente
}
