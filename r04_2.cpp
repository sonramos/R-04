/*QUESTAO 2: (Adivinhe	o	número	 –	“imprensadinho”)		 Escreva	um	programa	em	C++	que	escolhe	
um	 “número	 a	 ser	 adivinhado”	 selecionando	 um	 inteiro	 aleatório	 entra	 1	 e	 100.	 	 O	
programa	 deve	 exibe	 a	 mensagem	 “Adivinhe	 o	 número	 entre	 1	 e	 100”.	 O	 jogador	
insere	então	sua	1a	tentativa	de	adivinhação.		
Se	 o	 palpite	 estiver	 incorreto,	 seu	 programa	 deve	 exibir	 a	 mensagem	 “Muito	 alto.	
Tente	 novamente”	 ou	 “Muito	 baixo.	 Tente	 novamente”	 para	 ajudar	 o	 jogador	 a	
encontrar	a	resposta	correta.			
O	 programa	 deve	 solicitar	 ao	 jogador	 o	 próximo	 palpite	 até	 que	 o	 usuário	 insira	 a	
resposta	 correta.	 Quando	 isso	 acontecer,	 exiba	 a	 mensagem	 “Parábens.	 Você	
adivinhou	o	número”.*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	int x = 0, z = 0, cont = 1;
	
	srand(time(NULL));
	x = rand() % 100 + 1;
	
	std::cout << "Adivinhe o numero entre 1 e 100.\n";
	while(x != z){
		std::cout << cont << "a tentativa: ";
		std::cin >> z;
		if(z == x){
			std::cout << "Parabens!! Voce adivinhou o numero!" << endl;
			std::cout << "Numero adivinhado: " << x << endl << "Numero de tentativas: " << cont << endl;
			break;
		}else if(z < x){
			std::cout << "Muito baixo. Tente novamente." << endl;
		}else if (z > x){
			std::cout << "Muito alto. Tente novamente." << endl;
		}
		cont++;	
	}	
	return 0;
}