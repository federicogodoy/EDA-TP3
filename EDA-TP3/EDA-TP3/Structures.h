//Modulo en el que se definen las estructuras generales usadas
//en el programa.

#ifndef DEFINITIONS_H

#define DEFINITIONS_H
#define _USE_MATH_DEFINES
#include <math.h>


#define SUCIO false
#define LIMPIO true
#define UNIT 800
#define ROBOT_SIZE(u) (((u)/2.0))
#define RADIAN(x) (((x)*(M_PI))/180.0)
#define DEG(x) (((x)*180.0)/(double)M_PI)

#include <stdbool.h>
#include <stdlib.h>

typedef struct
{
	double x;
	double y;
}pos_t;

typedef struct
{
	pos_t pos;
	double angle;
	unsigned int unit;

}robot_t;

typedef struct
{
	unsigned int heigth;
	unsigned int width;
	pos_t ubicacion; //se considera la ubicacion respecto del centro de la baldosa.
	bool state;
}piso_t;


//Estructura en la que se guarda toda la informacion necesaria
//para correr la simulacion..
typedef struct 
{
	robot_t* robots;
	unsigned int robot_count;
	piso_t* piso;
	unsigned int width;
	unsigned int height;
	unsigned long tick_count;
	unsigned int unit;

}sim_t;



#endif // !DEFINITIONS_H
