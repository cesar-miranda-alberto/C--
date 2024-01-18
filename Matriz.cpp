/*
				***** MATRIZ *****
		
		Descripción:	
		El siguiente código implementa el uso de una matriz de 4x2 partiendo de los valores de los campos
		ingresados por el usuario.
		Fecha: 16-Abril-2021
		Version: 1.0
*/

#include<iostream>																	// Biblioteca estandar de entrada y salida de datos

using namespace std;																	// Acceso a las funciones
	
main()																			// Función principal
{	

	int matriz[4][2];																// Declaración e inicialización de la matriz de 4x2
	
	for(int f=0; f<4; f++)																// Ciclo For de cuatro iteraciones correspondientes  a las filas
	{
		for(int c=0; c<2; c++)															// Ciclo For de 2 iteraciones correspondientes a las columnas
		{
			cout<<"Ingresa el valor de la posicion ["<<f+1<<"]["<<c+1<<"]: ";								// Imprime texto en consola requeriendo los valores posición por posición
 			cin>>matriz[f][c];														// Asigna el valor a la posición correspondiente con respecto a las iteraciones
		}
	}
	
	cout<<"\n\n\n";																	// Agrega tres saltos de linea
	
	cout<<"\t\t\tEL RESULTADO DE LA MATIZ ES";													// Imprime en consola con tres tabulaciones texto de resultado con tres iteraciones
	
	cout<<"\n\n\t\t\t\t";																// Agrega dos saltos de linea junto con cuatro tabulaciones
	
	for(int f=0; f<4;f++)																// Ciclo for de cuatro iteraciones correspondientes a las filas
	{
		for(int c=0; c<2; c++)															// Ciclo for de dos iteraciones correspondientes a las columnas
		{
			cout<<"|"<<matriz[f][c]<<"|";													// Imprime en consola el resultado de la matriz
		}
		cout<<"\n\t\t\t\t";															// Agrega un salto de linea junto con tres tabulaciones
	}

	return 0;
}
