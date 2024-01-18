/*
		***** TABLA DE MULTIPLICAR *****
	
	Descripción:
	El siguiente código resulve la tábla de multiplicar dada por el usuario hasta el número diez  
	Fecha: 24-Febrero-2024
	Versión: 1.0
*/

#include <iostream>																// Biblioteca estandar de entrada y salida de datos

using namespace std;																// Acceso a todas la funciones
main()																		// Función principal
{
	
	int tabla, resul;															// Variables enteras para la tabla a calcular y para los resultados
	int i;																	// Variable para el ciclo for
	system("color f3");															// Establece el color de fondo blanco claro
	
	setlocale(LC_CTYPE, "Spanish");														// Configura el idioma del texto en pantalla en español
	cout<<"\t\tTabla de multiplicar";													// Imprime texto de titulo con dos tabulaciones
	cout<<"\n\n¿Que tabla deseas calcular?: ";												// Imprime texto para pedir tabla a calcular con dos saltos de linea
	cin>>tabla;																// Asigna el valor a la variable tabla
	
	for(i=1; i<=10; i++)															// Comienza el ciclo hasta el diez para resolver la tabla
	{
		resul= tabla * i;														// Guarda el resultado de la multiplicación de la tabla por la variable i que cambia con respecto al ciclo for
		cout<<"\n\n";															// Agrega dos saltos de linea
		cout<<tabla<<" x "<<i<<" = "<<resul;												// Imprime en consola el resultado de las multiplicaciones de la tabla
	}
	
	return 0;
}
