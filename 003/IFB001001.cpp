#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int total,         //soma das notas
		gradeCounter,  //n�mero de notas digitadas
		grade,		   //uma nota
		average;	   //m�dia das notas

	// fase de inicializa��o
	total = 0;
	gradeCounter = 1;

	// fase de processamento
	while (gradeCounter <= 10 ) {		//repate 10 vezes
		cout << "Forne�a a nota; ";		//solicite entrada de dados
		cin >> grade;					//l� nota digitada
		total = total + grade;			//soma nota digitada
		gradeCounter = gradeCounter + 1;//incrementa contador

	}

	// fase de t�rmino					
	average = total / 10;               //divis�o inteira
	setlocale(LC_ALL, "Portuguese");
	cout << "A m�dia da turma � " << average << endl;

	return 0;							// indica que programa terminou normalmente
}