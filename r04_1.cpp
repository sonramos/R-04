#include <iostream>

int main(){
	int x, a = 0;
	
	std::cout << "Iniciando programa: \"Qual o maior numero?!\"\n\nPara desligar agora, insira 0.\nInsira um numero: ";
	std::cin >> x;
	while(x != 0){
		if (x > a){
			std::cout << "Maior numero: " << x << "\n";
			a = x;
			}
			else
			std::cout << "Maior numero: " << a << "\n";
		std::cout << "\nInsira um numero: ";
		std::cin >> x;
	} 		
}