#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float nota1, nota2, nota3, nota4, media, nota_exame;
	float peso_nota1 = 2, peso_nota2 = 3, peso_nota3 = 4, peso_nota4 = 1;

	cin >> nota1 >> nota2 >> nota3 >> nota4;

	media = ((nota1 * peso_nota1) + (nota2 * peso_nota2) + (nota3 * peso_nota3) + (nota4 * peso_nota4)) / 10;
	cout << fixed << setprecision(1);
	cout << "Media: " << media << endl;

	if (media >= 7.0)
		cout << "Aluno aprovado." << endl;

	else if (media < 5.0)
		cout << "Aluno reprovado." << endl;

	else if (media >= 5.0 && media <= 6.9) {
		cout << "Aluno em exame." << endl;

		cin >> nota_exame;
		cout << "Nota do exame: " << nota_exame << endl;

		media = (media + nota_exame) / 2;

		if (media >= 5.0)
			cout << "Aluno aprovado." << endl;
		else if (media <= 4.9)
			cout << "Aluno reprovado." << endl;

		cout << "Media final: " << media << endl;
	}

	system("pause");
	return 0;
}