#include <iostream>
using namespace std;

class vertice
{
	private:
		int id;
		int dato;
	
	public:
		vertice();
		
		void setID(int _id)
		{
			id = _id;
		}
	
		int getID()
		{
			return id;
		}
	
		void setDato(int d)
		{
			dato = d;
		}
	
		int getDato()
		{
			return dato;
		}	
};
