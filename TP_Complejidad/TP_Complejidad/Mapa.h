#pragma once
class Mapa
{
public:
	int mapa[8][8];
	int mapaCheck[8][8];
public:
	Mapa();
	~Mapa();
	void InsertarJugador(int x, int y);
	void InsertarIA(int x, int y);
	int RetornarenCoord(int x, int y);
	void Eliminarficha(int x, int y);
	void retornar();
};

