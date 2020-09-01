#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Cardapio {
	int codigo;
	string especificacao;
	double preco;
};

Cardapio cardapio[5];
void preencher_cardapio();

main() {
	int item, quantidade;
	double total_a_pagar;

	preencher_cardapio();

	cin >> item >> quantidade;

	total_a_pagar = quantidade * cardapio[item - 1].preco;

	cout << fixed << setprecision(2);
	cout << "Total: R$ " << total_a_pagar << endl;

	system("pause");
}

void preencher_cardapio() {
	cardapio[0].codigo = 1;
	cardapio[0].especificacao = "Cachorro Quente";
	cardapio[0].preco = 4.00;

	cardapio[1].codigo = 2;
	cardapio[1].especificacao = "X-Salada";
	cardapio[1].preco = 4.50;

	cardapio[2].codigo = 3;
	cardapio[2].especificacao = "X-Bacon";
	cardapio[2].preco = 5.00;

	cardapio[3].codigo = 4;
	cardapio[3].especificacao = "Torrada Simples";
	cardapio[3].preco = 2.00;

	cardapio[4].codigo = 5;
	cardapio[4].especificacao = "Refrigerante";
	cardapio[4].preco = 1.50;
}