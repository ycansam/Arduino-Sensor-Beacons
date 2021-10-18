
// -*- mode: c++ -*-

// ----------------------------------------------------------
// Yeray Candel Sampedro
// 2021 - 10 - 18
// ----------------------------------------------------------

#ifndef PUERTO_SERIE_H_INCLUIDO
#define PUERTO_SERIE_H_INCLUIDO

// ----------------------------------------------------------
// ----------------------------------------------------------
class PuertoSerie
{

public:
  // .........................................................
  /**
   * PuertoSerie().Inicializa el PuertoSerie
   * 
   * @param baudios Baudios para inicializar el puerto serie
   */
  // .........................................................
  PuertoSerie(long baudios)
  {
    Serial.begin(baudios);
    // mejor no poner esto aquí: while ( !Serial ) delay(10);
  } // ()

  // .........................................................
  /**
   * esperarDisponible(). Espera a que el puerto serie este disponible
   * 
   */
  // .........................................................
  void esperarDisponible()
  {

    while (!Serial)
    {
      delay(10);
    }

  } // ()

  // .........................................................
  /**
   * escribir(). Printea un mensaje de cualquier tipo
   * 
   * @param mensaje escribe cualquier tipo de parametro en el Serial.
   */
  // .........................................................
  template <typename T>
  void escribir(T mensaje)
  {
    Serial.print(mensaje);
  } // ()

}; // class PuertoSerie

// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
#endif
