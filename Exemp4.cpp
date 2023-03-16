#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	double n1=0,n2=0,n3=0,m=0;
	cout<<"Insira a primeira nota ";
	cin>>n1;
	cout<<"Insira a segunda nota ";
	cin>>n2;
	cout<<"insira a terceira nota ";
	cin>>n3;
	m=(n1+n2+n3)/3;
	if(m>=6)
	{
		cout<<"Aprovado";
	}
	else
	{
		if(m<=3)
		{
			cout<<"Reprovado";
		}
		else
		{
			cout<<"Exame";
		}
	}

	return 0;
}
