#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ios;

#include <iomanip>

using std::setprecision;
using std::setiosflags;

int main()

{
	int total,			//soma das notas
	gradeCounter,		//n�meros de notas digitadas
	grade;				//uma nota
	double average;		//n�mero com ponto decimal para a m�dia

	// fase de inicializa��o
	total = 0;
	gradeCounter = 0;

	// fase de processamento
	cout << "Forne�a nota ou -1 para finalizar: ";
	cin >> grade;

	while (grade != -1) {
		total = total + grade;
		gradeCounter = gradeCounter + 1;
		cout << "Forne�a nota ou -1 para finalizar: ";
		cin >> grade;

	}

	// fase de t�rmino
	if (gradeCounter != 0) {
		average = static_cast<double> (total) / gradeCounter;
		setlocale(LC_ALL, "Portuguese");
		cout << "A m�dia da turma � " << setprecision(2)
			<< setiosflags(ios::fixed | ios::showpoint)
			<< average << endl;
	}
	else
		cout << "Nenhuma nota foi fornecida" << endl;

	return 0; // indica que o programa terminou com sucesso
}