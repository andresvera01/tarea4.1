#include <iostream>
using namespace std;

class arista
{
	private:
		arista *vi;
		arista *vj;
		
	public:
		arista();
		
    	arista(arista *vi, arista *vj)
    	{
        	this->vi = vi;
        	this->vj = vj;
    	}
    
		void setVI(arista *vi)
		{
			this->vi = vi;
		}
	
		arista *getVI()
		{
			return this->vi;
		}
	
		void setVJ(arista* vj)
		{
			this->vj = vj;
		}
	
		arista *getVJ()
		{
			return this->vj;
		}
		
		void iniciar()
		{
			this->vi = NULL;
			this->vj = NULL;
		}		
};
