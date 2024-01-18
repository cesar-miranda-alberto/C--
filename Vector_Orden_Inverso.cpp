/*
				***** VECTOR ORDEN INVERSO *****
		
		Descripción:
		El siguiente código implementa un vector cuyos valores serán determinados por el usuario
		y posteriormente estos serán presentados en consola en orden inverso al original.			 
*/

#include <iostream>														// Biblioteca estandar de entrada y salida de datos

using namespace std;														// Acceso a las funciones
	
main()																// Función principal
{
 	
   int vector[10];														// Declaración de variable para el vector
   system("color f3");														// Establece el color de fondo en blanco claro

   for(int i=0; i<=9; i++)													// Ciclo for de diez iteraciones correspondientes a los espacios del vector
   {
   	cout<<"Ingresa el numero "<<i+1<<": ";											// Toma de valores dentro del ciclo
    cin>>vector[i];														// Asignación de valores al vector
   }
   	cout<<"\n\n";														// Agrega dos saltos de linea
   	cout<<"Estos son los resultados";											// Imprime texto en consola para mostrar resultados
   	cout<<"\n\n";														// Agrega dos saltos de linea
   
	   for(int i=9; i>=0; i--)												// Ciclo for de diez iteraciones correspondientes a los espacios del vector de manera inversa
	   {
	   	 cout<<vector[i]<<"\n";												// Imprime en consola el resultado
	   }
   
   return 0;															// Programa finalizado con éxito
}
