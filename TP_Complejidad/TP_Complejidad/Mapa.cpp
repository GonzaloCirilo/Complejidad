#include "Mapa.h"



Mapa::Mapa()
{
	for (int j = 0; j < 8; j++) {
		for (int i = 0; i < 8; i++) {
			mapa[j][i] == 0;
		}
	}
}


Mapa::~Mapa()
{
}

void Mapa::InsertarJugador(int x, int y)
{
	for (int j = 0; j < 8; j++) {
		for (int i = 0; i < 8; i++) {
			mapaCheck[j][i] = mapa[j][i];
		}
	}
	mapa[y][x] = 1;
	
}

void Mapa::InsertarIA(int x, int y)
{
	/*for (int j = 0; j < 8; j++) {
		for (int i = 0; i < 8; i++) {
			mapaCheck[j][i] = mapa[j][i];
		}
	}*/
	mapa[y][x] = 2;}

int Mapa::RetornarenCoord(int x, int y)
{
	return mapa[y][x];
}

void Mapa::Eliminarficha(int x, int y)
{
	mapa[y][x] = 0;
}

void Mapa::retornar()
{
	for (int j = 0; j < 8; j++) {
		for (int i = 0; i < 8; i++) {
			mapa[j][i] = mapaCheck[j][i];
		}
	}
}
