/*
			***** AREA DEL CUADRADO *****
			
	Descripci�n:
	El siguiente c�digo calcula el area de un cuadrado a partir del valor dado por el usuario
	Fecha: 04-Febrero-2021
	Version: 1.0
*/

#include <iostream>															// Biblioteca estandar de salida y entrada	

using namespace std;														// Acceso a todas las funciones
	
main()																		// Funci�n principal
{

	float Lado, Area;														// Variables de valor y resultado
	cout<<"Ingresa el valor de cualquier lado: ";							// Toma del valor del lado
	cin>>Lado;																// Asignaci�n del valor a variable lado
	Area=(Lado*Lado);														// Calculo del �rea
	cout<<"El area de tu cuadrado es: "<<Area;								// Impresi�n de resultado en consola
	
	return 0;																// Programa terminado exitosamente
}
