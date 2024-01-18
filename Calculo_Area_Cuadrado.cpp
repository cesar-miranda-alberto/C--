/*
			***** AREA DEL CUADRADO *****
			
	Descripción:
	El siguiente código calcula el area de un cuadrado a partir del valor dado por el usuario
	Fecha: 04-Febrero-2021
	Version: 1.0
*/

#include <iostream>															// Biblioteca estandar de salida y entrada	

using namespace std;														// Acceso a todas las funciones
	
main()																		// Función principal
{

	float Lado, Area;														// Variables de valor y resultado
	cout<<"Ingresa el valor de cualquier lado: ";							// Toma del valor del lado
	cin>>Lado;																// Asignación del valor a variable lado
	Area=(Lado*Lado);														// Calculo del área
	cout<<"El area de tu cuadrado es: "<<Area;								// Impresión de resultado en consola
	
	return 0;																// Programa terminado exitosamente
}
