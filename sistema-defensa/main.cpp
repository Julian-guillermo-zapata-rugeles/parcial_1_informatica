// 5:30 + 1 hora vídeo //
#include <iostream>
#include <math.h> // se usará la librería matemática para sin

using namespace std;

const float GRAVEDAD = 9.81 ;
unsigned short int  ALTURA_BASE_ENEMIGA = 0 ;
unsigned short int  ALTURA_BASE_DEFESA = 0 ;
unsigned long long int DISTANCIA_BASES = 0 ;



void movimiento_bala_enemiga( unsigned short int , unsigned short int  ,  unsigned long long int );
/* @movimiento_bala_enemiga
        esta función toma 3 argumentos dos unsigned short int
            1) la velocidad 0 del disparo bala enemiga
            2) el angulo con el que fue lanzado la bala enemiga
            3) la distancia entre las bases
        el objetivo es determinar la trayectoria de la bala enemiga  y verificar en qué punto caerá

*/

int main()
{
    cout << "Altura de la base enemiga : ";
    cin >> ALTURA_BASE_ENEMIGA;
    cout << "Velocidad salida bala enemiga :";
    movimiento_bala_enemiga(9,30,DISTANCIA_BASES);
    return 0;
}

void movimiento_bala_enemiga(unsigned short int velocidad_zero , unsigned short int angulo , unsigned short int time_seconds ){
    signed short int Vox = 0;
    signed short int Voy = 0;
    signed short int position_x = 0 ;
    signed short int position_y = 0 ;
    Voy = velocidad_zero*sin(angulo);
    Vox = velocidad_zero*cos(angulo);

    cout << "" <<" DEBUG position tmp_position " << endl;

}
