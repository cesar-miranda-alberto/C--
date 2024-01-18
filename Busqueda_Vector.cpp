/*
				***** BUSQUEDA EN VECTOR *****
				
		Descripci�n:
		El siguiente c�digo tiene como finalidad implementar la busqueda de un numero dado por el usuario
		dentro de un vector con valores inicializados.
*/

#include <iostream>																				// Biblioteca estandar de entrada y salida de datos

using namespace std;																			// Acceso a las funciones

main()																							// Funci�n principal
{

   
   int vector[]={14,3,6,9,21,56,89,0,1,45};															// Vector inicializado
   int num, b=0;																				// Declaraci�n de variablie e inicializaci�n
   system("color f3");																			// Define color de fondo en blanco claro
   
   cout<<"Ingresa un numero entero: ";															// Imprime texto en consola pidiendo numero
   cin>>num;																					// Asigna el valor a la variable num															
   
   for(int i=0; i<=10; i++)																		// Ciclo for de diez iteraciones correspondientes a los espacios del vector
   {
   	
   		if(num==vector[i])																		// Condicional si se encuetra el numero ingresado en la posici�n de iteraci�n del vector
   		{
   			b++;																				// Suma uno a la variable J
		}
   		
   }
   
    if(b== 1)																					// Condicional si la variable b esta en uno 
    {
    	cout<<"El numero que ingresaste se encuentra en el vector.";							// Imprime texto en consola de confirmaci�n de n�mero encontrado
    } 
     else																						// De lo contrario
     {
   	  cout<<"El numero que ingresaste no se encuentra en el vector.";							// Imprime texto en consola de negaci�n de n�mero encontrado
     }
   
   	
}
