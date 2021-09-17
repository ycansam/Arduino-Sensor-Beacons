// -*- mode: c++ -*-

#ifndef MEDIDOR_H_INCLUIDO
#define MEDIDOR_H_INCLUIDO

// ------------------------------------------------------
// ------------------------------------------------------
class Medidor {

  // .....................................................
  // .....................................................
private:
int sensorData [11];
/**
   * Serial1InParser(). transforma los datos de la medicion del Serial1 a int..
   */
void Serial1InParser()
{
    int i = 0;
    for (int i =0; i<11; i++) {
       while(!Serial1.available()) { }
       sensorData[i] = Serial1.parseInt();
    }
}
public:

  // .....................................................
  // constructor
  // .....................................................
  Medidor(  ) {
  } // ()

   /**
   * iniciarMedidor(). Inicia El serial 1 para poder leer datos del sensor
   */
  void iniciarMedidor() {
    Serial1.begin(9600);
  // las cosas que no se puedan hacer en el constructor, if any
  } // ()

  // .....................................................
  // .....................................................
  /**
   * medirCO2(). Mide el CO2 en el momento
   * @returns valor de la medicion
   */
  int medirCO2() {
    Serial1.print('\r'); // Inicia una lectura del sensor. Ahora hay que espera a que nos envíe algo de vuelta!
    Serial.println("Lectura del sensor iniciada...esperando...");
    Serial1InParser();
    for (int j=0; j<11; j++) {Serial.println(sensorData[j]);}

    
  return sensorData[0];
 // return 235;
  } // ()

  // .....................................................
  // .....................................................
  /**
   * medirTemperatura(). Mide la Temperatura en el momento
   * @returns valor de la medicion
   */
  int medirTemperatura() {
  return -12; // qué frío !
  } // ()
  
}; // class

// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
#endif
