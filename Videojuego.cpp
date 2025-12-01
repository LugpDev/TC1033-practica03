#include <string>
#include "Videojuego.h"

using namespace std;

Videojuego::Videojuego()
{
  titulo = "";
  genero = "";
  anioDeLanzamiento = 0;
}

Videojuego::Videojuego(string _titulo, string _genero, int _anioDeLanzamieto)
{
  titulo = _titulo;
  genero = _genero;
  anioDeLanzamiento = _anioDeLanzamieto;
}

string Videojuego::getTitulo()
{
  return titulo;
}

string Videojuego::getGenero()
{
  return genero;
}

int Videojuego::getAnio()
{
  return anioDeLanzamiento;
}

void Videojuego::setTitulo(string nuevoTitulo)
{
  titulo = nuevoTitulo;
}

void Videojuego::setGenero(string nuevoGenero)
{
  genero = nuevoGenero;
}

void Videojuego::setAnio(int nuevoAnio)
{
  anioDeLanzamiento = nuevoAnio;
}
