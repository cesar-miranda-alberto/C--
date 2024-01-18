/*
				***** VECTOR ORDEN INVERSO *****
		
		Descripci�n:
		El siguiente c�digo implementa un vector cuyos valores ser�n determinados por el usuario
		y posteriormente estos ser�n presentados en consola en orden inverso al original.			 
*/

#include <iostream>																	// Biblioteca estandar de entrada y salida de datos

using namespace std;																// Acceso a las funciones
	
main()																				// Funci�n principal
{
 	
   int vector[10];																	// Declaraci�n de variable para el vector
   system("color f3");																// Establece el color de fondo en blanco claro

   for(int i=0; i<=9; i++)															// Ciclo for de diez iteraciones correspondientes a los espacios del vector
   {
   	cout<<"Ingresa el numero "<<i+1<<": ";											// Toma de valores dentro del ciclo
    cin>>vector[i];																	// Asignaci�n de valores al vector
   }
   	cout<<"\n\n";																	// Agrega dos saltos de linea
   	cout<<"Estos son los resultados";												// Imprime texto en consola para mostrar resultados
   	cout<<"\n\n";																	// Agrega dos saltos de linea
   
	   for(int i=9; i>=0; i--)														// Ciclo for de diez iteraciones correspondientes a los espacios del vector de manera inversa
	   {
	   	 cout<<vector[i]<<"\n";														// Imprime en consola el resultado
	   }
   
   return 0;
}
