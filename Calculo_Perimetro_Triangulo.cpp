/*
		***** PERIMETRO DE UN TRIANGULO *****
	
	Descripción:
	El presente código calcula el área de un triangulo partiendo de los valores
	dados por el usuario siguiendo la fórmula 
	P= A+B+C
*/

#include <iostream>															// Biblioteca estandar de entrada y salida de los datos

using namespace std;															// Acceso a las funciones

main()																	// Función principal
{
	
	float Cady, Cop, Hipo, Are;													// Declaración de variables
	
	cout<<"\t\tprograma que calcula el perimetro de un triangulo rectangulo";							// Imprime texto de titulo 
	cout<<"\n\n";															// Agrega dos saltos de linea
	cout<<"Escribe el valor del cateto adyacente: ";										// Toma de requerimientos
	cin>>Cady;															// Asignación de valor a la variable cady
	cout<<"Escribe el valor del cateto opuesto: ";											// Toma de requerimientos
	cin>>Cop;															// Asignación de valor a la variable cop
	cout<<"Escribe el valor de la hipotenusa: ";											// Toma de requerimiento
	cin>>Hipo;															// Asignación de valor a la variable hipotenusa
	Are=Cady+Cop+Hipo;														// Calculo de área 
	cout<<"El perimetro del triagulo rectangulo es: "<<Are;										// Imprensión del resultado en consola
	
	return 0;
}
