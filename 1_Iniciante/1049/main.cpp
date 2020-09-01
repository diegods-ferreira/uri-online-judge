#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

main() {
	string palavra1, palavra2, palavra3, tipo_animal;

	fflush(stdin);	cin >> palavra1;
	fflush(stdin);	cin >> palavra2;
	fflush(stdin);	cin >> palavra3;

	if (palavra1 == "vertebrado") {
		if (palavra2 == "ave") {
			if (palavra3 == "carnivoro") {
				tipo_animal = "aguia";
			}
			else if (palavra3 == "onivoro") {
				tipo_animal = "pomba";
			}
		}
		else if (palavra2 == "mamifero") {
			if (palavra3 == "onivoro") {
				tipo_animal = "homem";
			}
			else if (palavra3 == "herbivoro") {
				tipo_animal = "vaca";
			}
		}
	}
	else if (palavra1 == "invertebrado") {
		if (palavra2 == "inseto") {
			if (palavra3 == "hematofago") {
				tipo_animal = "pulga";
			}
			else if (palavra3 == "herbivoro") {
				tipo_animal = "lagarta";
			}
		}
		else if (palavra2 == "anelideo") {
			if (palavra3 == "hematofago") {
				tipo_animal = "sanguessuga";
			}
			else if (palavra3 == "onivoro") {
				tipo_animal = "minhoca";
			}
		}
	}

	cout << tipo_animal << endl;

	system("pause");
}