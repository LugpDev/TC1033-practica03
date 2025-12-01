#include <vector>
#include <string>
#include <iostream>
#include "Videojuego.h"
#include "Coleccion.h"

using namespace std;

Coleccion::Coleccion()
{
}

void Coleccion::agregarVideojuego(Videojuego videojuego)
{
  videojuegos.push_back(videojuego);
}

void Coleccion::listarVideojuegos()
{
  for (Videojuego videojuego : videojuegos)
  {
    cout << "================================" << endl;

    cout << "Título: " << videojuego.getTitulo() << endl;
    cout << "Año: " << videojuego.getAnioDeLanzamiento() << endl;
    cout << "Género: " << videojuego.getGenero() << endl;
    cout << "================================" << endl;
  }
}

int Coleccion::cantidadVideojuegos()
{
  return videojuegos.size();
}
