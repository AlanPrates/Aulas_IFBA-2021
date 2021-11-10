// Fig. 2.9
// Programa para calculo de média da turma c/repetição controlada por sentinela.
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
	int total,		//soma das notas
	gradeCounter,		//números de notas digitadas
	grade;			//uma nota
	double average;		//número com ponto decimal para a média

	// fase de inicialização
	total = 0;
	gradeCounter = 0;

	// fase de processamento
	cout << "Forneça nota ou -1 para finalizar: ";
	cin >> grade;

	while (grade != -1) {
		total = total + grade;
		gradeCounter = gradeCounter + 1;
		cout << "Forneça nota ou -1 para finalizar: ";
		cin >> grade;

	}

	// fase de término
	if (gradeCounter != 0) {
		average = static_cast<double> (total) / gradeCounter;
		setlocale(LC_ALL, "Portuguese");
		cout << "A média da turma é " << setprecision(2)
			<< setiosflags(ios::fixed | ios::showpoint)
			<< average << endl;
	}
	else
		cout << "Nenhuma nota foi fornecida" << endl;

	return 0; // indica que o programa terminou com sucesso.
}
