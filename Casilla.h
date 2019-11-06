#include <stdio.h>
#include <string.h>

class Casilla
{
	private:
		string nombre;
		int posicion;
		int precio;
		int estado;
	public:
		Casilla(string a, int pos, int pre, int est);
		void Setprecio(int a);
		void Setestado(int a);
		string Getnombre();
		int Getposicion();
		int Getprecio();
		int Getestado();
};