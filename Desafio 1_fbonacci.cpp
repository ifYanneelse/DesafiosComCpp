/*
Gerar a sequência de Fibonacci até o 20º termo usando uma estrutura de repetição. 
A sequência de Fibonacci consiste na relação iniciada por 0 e 1, e, a partir daí: 1, 2, 3, 5, 8, 13, ....
*/


#include<iostream>
using namespace std;

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int x=0, y=1, soma;
	
	cout<<x<<endl;
	cout<<y<<endl;
		
	for (int cont=2; cont<20; cont++)
	{
		soma = (x+y);
		cout<<soma<<endl;
		x=y;
		y=soma;
	}
	
}