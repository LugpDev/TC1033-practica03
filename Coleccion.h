#ifndef __COLECCION_H__
#define __COLECCION_H__

#include <vector>
#include "Videojuego.h"

using namespace std;

class Coleccion
{
private:
  vector<Videojuego> videojuegos;

public:
  Coleccion();
  void agregarVideojuego(Videojuego videojuego);
  void listarVideojuegos();
  int cantidadVideojuegos();
};

#endif // __COLECCION_H__