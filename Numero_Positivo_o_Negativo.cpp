/*
			***** NUMERO NEGATIVO O POSITIVO *****
		
		Descripci�n:
		El siguiente c�digo tiene como finalidad determinar si el n�mero ingresado por el usuario es positivo o negativo
*/

#include <iostream>																								// Biblioteca estandar de entrada y salida de datos

using namespace std;																							// Acceso a las funciones 

main()																											// Funci�n principal

{

   int num;																										// Variable que contendr� el numero a determinar
   
   cout<<"\t\tPrograma que indica si un numero entero es negativo o positivo.";									// Impresi�n en consola del texto en consola
   cout<<"\n\n";																								// Agrega dos saltos de linea
   cout<<"Digita un numero entero que no sea 0: ";																// Toma de requerimientos
   cin>>num;																									// Asignaci�n de valor a la variable num
   if( num>0)																									// Si es mayor a cero
   {
   	cout<<"Tu numero es positivo: "<<num;																		// Impresi�n de texto en consola el numero es positivo
   }
   else																											// De lo contrario
   {
   cout<<"Tu numero es negativo: "<<num;																		// El n�mero es negativo
   }

}
