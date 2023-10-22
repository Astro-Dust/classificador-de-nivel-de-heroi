#include <iostream>
#include <string>

int main() {

	std::string nome;
	int xp;
	std::string titulo;

	std::cout << "Nome do herói/heroina: ";
	std::cin >> nome;
	std::cout << "Quantidade de XP: ";
	std::cin >> xp;
	

	std::cout << "Analisando " << nome << " e seu XP, temos: " << std::endl;

	switch(xp) {
		case 1 ... 999:
			titulo = "Ferro";
			break;
		case 1001 ... 1999:
			titulo = "Bronze";
			break;
		case 2001 ... 5000:
			titulo = "Prata";
			break;
		case 6001 ... 7000:
			titulo = "Ouro";			
			break;
		case 7001 ... 8000:
			titulo = "Platina";
			break;
		case 8001 ... 9000:
			titulo = "Ascendente";
			break;
		case 9001 ... 10000:
			titulo = "Imortal";
			break;
		default:
			if(xp > 10001) {
				titulo = "Radiante";
			} else {
				std::cout << "XP inválido!" << std::endl;
			}
	} 

	std::cout << "O herói/heroina de nome " << nome << " está no nível " << titulo << " - " << xp << " XP." << std::endl;
	
	return 0;
}
