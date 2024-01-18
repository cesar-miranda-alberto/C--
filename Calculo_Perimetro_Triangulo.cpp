/*
		***** PERIMETRO DE UN TRIANGULO *****
	
	Descripci�n:
	El presente c�digo calcula el �rea de un triangulo partiendo de los valores
	dados por el usuario siguiendo la f�rmula 
	P= A+B+C
*/

#include <iostream>																						// Biblioteca estandar de entrada y salida de los datos

using namespace std;																					// Acceso a las funciones

main()																									// Funci�n principal
{
	
	float Cady, Cop, Hipo, Are;																			// Declaraci�n de variables
	
	cout<<"\t\tprograma que calcula el perimetro de un triangulo rectangulo";							// Imprime texto de titulo 
	cout<<"\n\n";																						// Agrega dos saltos de linea
	cout<<"Escribe el valor del cateto adyacente: ";													// Toma de requerimientos
	cin>>Cady;																							// Asignaci�n de valor a la variable cady
	cout<<"Escribe el valor del cateto opuesto: ";														// Toma de requerimientos
	cin>>Cop;																							// Asignaci�n de valor a la variable cop
	cout<<"Escribe el valor de la hipotenusa: ";														// Toma de requerimiento
	cin>>Hipo;																							// Asignaci�n de valor a la variable hipotenusa
	Are=Cady+Cop+Hipo;																					// Calculo de �rea 
	cout<<"El perimetro del triagulo rectangulo es: "<<Are;												// Imprensi�n del resultado en consola
	
	return 0;
}
