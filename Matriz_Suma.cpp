/*
				***** SUMA DE VALORES DE LA MATRIZ *****
	
		Descripción:
		El siguiente programa implemnta la suma de los valores de una matriz partiendo por los datos dados
		por el usuario, imprimiendo en consola el resultado y la matriz resultante.
		Fecha: 16-Abril-2021	
		Versión: 1.0
*/

#include <iostream>															// Biblioteca estandar de entrada y salida de datos

using namespace std;															// Acceso a todas las funciones 

main()																	// Función principal
{
	
	int matriz[4][2];														// Declaración de la matriz
	int suma=0;															// Declaración e inicialización de un acumulador
	system("color f3");														// Establece el color de fondo en blanco claro
		
	for(int f=0; f<4; f++)														// Ciclo for de cuatro iteraciones correspondientes a las posiciones de la fila
	{
		for(int c=0; c<2; c++)													// Ciclo for de dos iteraciones correspondientes a las posiciones de la columna
		{
			cout<<"Ingresa el valor de la posicion ["<<f+1<<"]["<<c+1<<"]: ";						// Imprime texto en consola solicitando el valor correspondiente
			cin>>matriz[f][c];												// Asigna el valor ingresado con respecto a las iteraciones de f y c
		    suma=suma+	matriz[f][c];												// Acumula la suma de los valores de los campos de la matriz
		}
	}
	
	cout<<"\n\n\n";															// Agrega tres saltos de linea
 	cout<<"\t\t\t\tLa suma de los numeros de la matriz es: "<<suma;									// Imprime texto en consola de resultado
	cout<<"\n\n\t\t\t\t";														// Agrega dos saltos de linea junto con tres tabulaciones
	
	for(int f=0; f<4; f++)														// Ciclo for de cuatro iteraciones correspondientes a las posiciones de la fila
	{
		for(int c=0; c<2; c++)													// Ciclo for de dos iteraciones correspondientes a las posiciones de la columna
		{
			
			cout<<"\t| "<<matriz[f][c];											// Imprime en consola la matriz con los valores en su posición
		}
		cout<<"\n\t\t\t\t";													// Agrega un salto de linea junto con tres tabulaciones
	}
	
	return 0;															// Programa finalizado con éxito
}
