#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

double n1=0,n2=0,n3=0,m=0;
cout<<"Insira o valor da nota 1 ";
cin>>n1;
cout<<"Insira o valor da nota 2 ";
cin>>n2;
cout<<"Insira o valor da nota 3 ";
cin>>n3;
m=(n1+n2+n3)/3;
if(m>=7)
{
    cout<<"Voce foi Aprovado com a media "<<m;
}
else
{
    cout<<"Voce foi Reprovado com a media "<<m;
}
	return 0;
}
