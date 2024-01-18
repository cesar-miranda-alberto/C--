/*
					***** CICLO DO WHILE *****
		
		Descripci�n:		
		EL siguiente programa calcula el factorial de un n�mero dado por el usuario y pregunta si requiere 
		calcular otro n�mero, implementando el ciclo do while.
		Fecha: 10-Marzo-2021
		Versi�n: 1.0
		
*/
#include <iostream>																						// Biblioteca estandar de entrada y salida de datos

using namespace std;																					// Acceso a todas las funciones

main()																									// Funci�n principal
{
 
  int i, numero, factor;																				// Definici�n de variables para el ciclo, el numero a calcular y el resultado correspondiente
  system("color f3");																					// Establece el color de fondo blanco claro
  char op;																								// Define la variable de opci�n en tipo char
  
  do																									// Inicializa el ciclo do
  {
  	cout<<"Ingresa un numero entero: ";																	// Imprime el texto pidiendo el numero para calcular
  		cin>>numero;																					// Asigna el valor a la variable numero
  	factor=1;																							// Inicializa el valor 1 a la variable factor
  		i=1;																							// Inicializa el valor 1 a la variable i
  while(i<=numero)																						// Inicio del ciclo while que se ejecuta mientras la variable i sea menor al numero
  {
  	factor= factor*i;																					// Ejecuta el c�lculo
   i++;																									// Incrementa el valor de i
  }
  cout<<"El factorial del numero "<<numero<<" es: "<<factor;											// Imprime texto en consola con el n�mero y su factorial correspondiente
  cout<<"\n\n";																							// Agrega dos saltos de linea
  cout<<"Deseas calcular otro facotorial S para si / o N para no: ";									// Imprime texto en consola solicitando si se requiere calcular otro n�mero
  cin>>op;																								// Asigna el valor a la variable op
  }
  
  while (op=='s' || op=='S');																			// Toma desici�n si entra de nuevo el ciclo
 
 	return 0;
 }
