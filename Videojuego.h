#ifndef __VIDEOJUEGO_H__
#define __VIDEOJUEGO_H__

#include <string>

using namespace std;

class Videojuego
{
private:
  string titulo;
  string genero;
  int anioDeLanzamiento;

public:
  Videojuego();
  Videojuego(string _titulo, string _genero, int _anioDeLanzamieto);

  string getTitulo();
  string getGenero();
  int getAnio();

  void setTitulo(string nuevoTitulo);
  void setGenero(string nuevoGenero);
  void setAnio(int nuevoAnio);
};

#endif // __VIDEOJUEGO_H__