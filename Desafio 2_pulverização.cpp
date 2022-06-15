/*
A Companhia de Pulverização 'Faz Tudo Ltda', utiliza aviões para pulverizar lavouras. Os custos de
pulverização dependem do tipo da praga e da área contratada conforme tabela:

Tipo 	Pulverização 		Valor
1 		Ervas Daninhas 		R$ 50,00 por acre
2 		Gafanhotos 			R$ 90,00 por acre
3 		Broca 				R$ 120,00 por acre
4 		Tudo acima 			R$ 170,00 por acre

Faça um programa que leia as informações: 
nome do fazendeiro, tipo de pulverização e a área a ser pulverizada.

Calcular o custo total de fazendeiro e imprimir o seu nome, seguido de sua conta.
Repetir o procedimento até que o nome do fazendeiro seja 'XXX'.
*/


#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"portuguese");
	
	string nome;
	int tipo;
	float area, total;
	char continuar='s';
	
do
{
	cout<<"Digite o seu nome: "; 	cin>>nome;
	
	do
	{
	cout<<"\n"<<"Digite (1,2,3 ou 4) para qual o tipo de pulverização ";
	cout<<"\n"<<"1 Ervas Daninhas | ";
	cout<<" 2 Gafanhotos | ";
	cout<<" 3 Broca | ";
	cout<<" 4 Tudo acima"<<"\n";
	cout<<"Tipo: "; 
	cin>>tipo;
		if (tipo!=1 and tipo!=2 and tipo!=3 and tipo!=4)
		{
			cout<<"Categoria inválida!!!"<<"\n";
		}
	} while (tipo!=1 and tipo!=2 and tipo!=3 and tipo!=4);
		
	cout<<"\n"<<"Qual o tamanho (por acre) que será pulverizada: "; cin>>area;
	
	if (tipo==1)
	{
		total=area*50;
		cout<<"\n"<<nome<<", para a pulverização de Ervas daninhas, e área de "<<area<<", o valor final será de R$"<<total<<"."<<"\n";
	}
	else if (tipo==2)
	{
		total=area*90;
		cout<<"\n"<<nome<<", para a pulverização de Gafanhotos, e área de "<<area<<", o valor final será de R$"<<total<<"."<<"\n";
	}
	else if (tipo==3)
	{
		total=area*120;
		cout<<"\n"<<nome<<", para a pulverização de Broca, e área de "<<area<<", o valor final será de R$"<<total<<"."<<"\n";
	}
	else
	{
		total=area*170;
		cout<<"\n"<<nome<<", para a pulverização de Ervas daninhas, Gafanhotos e Broca, e área de "<<area<<", o valor final será de R$"<<total<<"."<<"\n";
	}		

	cout<<"\n\n"<<"Deseja testar outro tipo de procedimento? (s ou n)"<<endl; 
	cin>>continuar; 
	cout<<"\n"<<"----------------------------------"<<"\n\n";

}
	while ((continuar == 's') || (continuar == 'S'));
		
}

