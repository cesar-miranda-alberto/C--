/*
				***** SUMA DE VECTORES *****
		
		Descripción:	
		El presente código tiene como finalidad sumar los valores de dos vectores cuyos datos
		serán ingresados por el usuario.
		Fecha: 25-Marzo-2021
		Version: 1.0
*/

#include <iostream>															// Biblioteca estandar de entrada y salida de datos

using namespace std;															// Acceso a las funciones
	
main()																	// Función principal
{
	
	int A[5], B[5], C[5];														// Declaración de los dos vectores a sumar y el vector de resultado
	int i;
	system("color f3");														// Establece el color del fondo en blanco claro
  
    cout<<"Vector 1";															// Impresión de texto en consola de indicación del primer vector
    cout<<"\n";																// Agrega un salto de linea
    
    for(i=0; i<=4; i++)															// Ciclo for de cinco iteraciones, las correspondientes a los espacios del vector
    {
      cout<<"Ingresa un numero en la posicion "<<i+1<<": ";										// Impresión de texto en consola para pedir el valor mas su espacio correspondiente
	  cin>>A[i];															// Asignación de valor al vector en el espacio acorde a la iteración
	}
	
	cout<<"\n";															// Agrega un salto de linea
	cout<<"  VECTOR 2";														// Impresión de texto en consola de indicación del primer vector
	
	for(i=0; i<=4; i++)														// Ciclo for de cinco iteraciones, las correspondientes a los espacios del vector
    {
    	cout<<"\n";															// Agrega un salto de linea
      cout<<" Ingresa un numero en la posicion "<<i+1<<": ";										// Impresión de texto en consola para pedir el valor mas su espacio correspondiente
	  cin>>B[i];															// Asignación de valor al vector en el espacio acorde a la iteración
	}
	
	for(i=0; i<=4; i++)														// Ciclo for de cinco iteraciones, las correspondientes a los espacios del vector de los resultados
	{
		C[i]= A[i]+B[i];													// Suma de los dos vectores posición por posición acorde a las iteraciones 
	}
	
	cout<<"\n\n";															// Agrega dos saltos de linea
	cout<<"\t\t\tLas sumas de los valores de los dos vectores son: ";								// Imprime texto en consola indicando los resultados
	cout<<"\n";															// Agrega un salto de linea
	cout<<"\t\tVector 1     Vector 2     Resultado";										// Imprime texto en consola para identificar los vectores
	cout<<"\n";															// Agrega un salto de linea
	for(i=0; i<=4; i++)														// Ciclo for de cinco iteraciones para mostrar los resultados
	{
		
      cout<<"\t\t   "<<A[i] <<"      +      " <<B[i]<< "   =        "<<C[i]<<"\n";							// Imprime en consola los resultados correspondientes
	}
	
	return 0;
}
