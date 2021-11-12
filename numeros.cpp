#include <iostream>
#include "arista.cpp"
#include "vertice.cpp"
using namespace std;

arista a;
vertice v;

int repe;
int num;
int id;
int data;

void arreglo()
{
	int arreglo[repe] = {};
	cout<<"Escriba el numero de elementos en su arreglo"<<endl;
	cin>>repe;
	for (int i = 0; i < repe; ++i)
	{
		cout<<"Inserte el numero en el arreglo"<<endl;
		cin>>arreglo[i];
	}
	for (int i = 0; i < repe; ++i)
	{
		printf("%i, ", arreglo[i]);
	}
}

void grafo()
{
	id = 0;
	a.iniciar();
	for (int i = 0; i < repe; ++i)
	{
		a.getVI();
		v.setID(id);
		v.getID();
		id =+ 1;
		data = arreglo[i];
		v.setDato(data);
		v.getDato();
		a.getVJ();
	}
}

int main()
{
	arreglo();
	grafo();
	return 0;
}
