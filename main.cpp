#include <iostream>
#include "Coleccion.h"
#include "Videojuego.h"
using namespace std;

int main()
{
  Videojuego v1("The Legend of Zelda", "Aventura", 1986);
  Videojuego v2("Minecraft", "Sandbox", 2011);
  Videojuego v3("Among Us", "Multijugador", 2018);

  Coleccion miColeccion;
  miColeccion.agregarVideojuego(v1);
  miColeccion.agregarVideojuego(v2);
  miColeccion.agregarVideojuego(v3);

  cout << "Videojuegos en la colección:" << endl;
  miColeccion.listarVideojuegos();

  cout << "Cantidad de videojuegos en la colección:";
  cout << miColeccion.cantidadVideojuegos() << endl;

  return 0;
}