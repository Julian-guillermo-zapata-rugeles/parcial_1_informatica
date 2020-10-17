#include <iostream>
#include <math.h> // se usará la librería matemática para sin

using namespace std;

const float GRAVEDAD = 9.81 ;
const unsigned short int  ALTURA_ARMA_ENEMIGA = 0 ;
const unsigned short int  ALTURA_BASE_DEFESA = 0 ;
const unsigned long long int DISTANCIA_BASES = 0 ;

void movimiento_bala_enemiga( unsigned short int , unsigned short int  , const unsigned long long int DISTACIA );
/* @movimiento_bala_enemiga
        esta función toma 3 argumentos dos unsigned short int
            1) la velocidad 0 del disparo bala enemiga
            2) el angulo con el que fue lanzado la bala enemiga
            3) la distancia entre las bases
        el objetivo es determinar la trayectoria de la bala enemiga  y verificar en qué punto caerá
*/
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

void movimiento_bala_enemiga(USI velocidad_cero , USI angulo){

}
