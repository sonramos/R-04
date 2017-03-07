/* Escreva	um	programa	em	C++	que	simula	o	lançamento	de	um	dado	n	vezes	e	imprime	
o	 percentual	 de	 surgimento	 de	 cada	 face	 do	 dado.	 O	 valor	 n	 é	 introduzido	 pelo	
usuário,	sendo	que	0	encerra	o	programa.*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	int x = 0, aux = 0, dado = 0, d1=0, d2=0, d3=0, d4=0, d5=0, d6=0;
	double r1=0.0, r2=0.0, r3=0.0, r4=0.0, r5=0.0, r6=0.0;
	
	cout << "Quantidade de vezes (0 para encerrar): ";
	cin >> x;
	aux = x;
	
	if (x==0){
		cout << "Fim do programa." << endl;	
		return 0;
	}
	srand(time(NULL));
	while(x!=0){
		dado = rand() % 6 + 1;
		switch(dado){
			case 1: d1++;
			break;
			case 2: d2++;
			break;
			case 3: d3++;
			break;
			case 4: d4++;
			break;
			case 5: d5++;
			break;
			case 6: d6++;
			break;
		}
		x--;	
	}	
		r1 = (d1 *100)/aux;
		r2 = (d2 *100)/aux;
		r3 = (d3 *100)/aux;
		r4 = (d4 *100)/aux;
		r5 = (d5 *100)/aux;
		r6 = (d6 *100)/aux;
		
		cout << "1 = " << d1 << ". Sendo " << r1 << "% da rolagem" << endl;
		cout << "2 = " << d2 << ". Sendo " << r2 << "% da rolagem" << endl;
		cout << "3 = " << d3 << ". Sendo " << r3 << "% da rolagem" << endl;
		cout << "4 = " << d4 << ". Sendo " << r4 << "% da rolagem" << endl;
		cout << "5 = " << d5 << ". Sendo " << r5 << "% da rolagem" << endl;
		cout << "6 = " << d6 << ". Sendo " << r6 << "% da rolagem" << endl;
	
	return 0;
}