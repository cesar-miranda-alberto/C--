/*
		***** CONTADOR DE VOTOS *****
	
	Descripción:
	El siguiente código implementa un conteo de votos a partir de la selección de los usuarios implementando
	los ciclo for y la toma de decisiones. Tomand como referencia el total de los votos solo serán diez personas 
	las que podrán votar.
	 
*/

#include <iostream>																															// Biblioteca estandar de entrada y salida de datos

using namespace std;																														// Acceso a todas las funciones

int main()																																	// Función principal
{
	
	int  c1=0, c2=0, c3=0, can;																												// Declaración de variables para almacenar los votos canditato1,2,3 y canditado para opción (can)
	system("Color f3");																														// Establece el color de fondo en blanco claro
	
	for (int i=1; i<=10; i++)																												// Ciclo for de diez iteraciones correspondiente al total de personas que van a votar
	{
		cout<<"\t\t\tCandidatos a Jefe";																									// Imprime texto en consola de titulo con tres tabulaciones
		cout<<"\n      1.- Candidato 1";																									// Imprime texto en consola con un salto de linea de los candidatos
		cout<<"\n      2.- Candidato 2";
		cout<<"\n      3.- Candidato 3";
		cout<<"\n\n";
		cout<<"Seleccione su candidato: ";																									// Imprime texto en consola con instrucciones  
		cin>>can;																															// Asigna el valor a la variable can			
		system("cls");																														// Limpia el texto en la consola
		switch (can)																														// Inicia la sentencia switch
		{
			case 1: 																														// En caso de votar el candidato 1
					c1++;																													// Incrementa un voto a su favor
			break;																															// Frena el proceso del case 1
			case 2:																															// En el caso de votar por el candidato 2
					c2++;																													// Aumenta 1 voto a su favor
			break;																															// Frena el proceso del case 2
			case 3:																															// En caso de votar por el candidato 3
					c3++;																													// Aumenta 1 voto a su favor
			break;																															// Frena el proceso del case
			default:cout<<"!ERROR! SELECCIONA UNA DE LAS OPCIONES ANTERIORMENTE DADAS";														// Si selecciona una opción invalida imprime en consola una advertencia
		}
		
	}
	cout<<" \n\n\tEl candidato 1 tuvo "<<c1<<" votos";																						// Imprime en consola los votos del candidato 1
	cout<<" \n\n\tEl  candidato 2 tuvo "<<c2<<" votos";																						// Imprime en consola los votos del candidato 2
	cout<<" \n\n\tEl candidata 3 tuvo "<<c3<<" votos";																						// Imprime en consola los votos del candidato 3
	if(c1>c2 && c1>c3)																														// Si los votos del candidato 1 son mayores que los del candidato 2 & y candidato 3
	{
		cout<<"\n\n\n\n*El ganador es el candidato 1, con "<<c1<<" votos*";																	// Imprime en consola el ganador es candidato 1 y su total de votos
	}
	if(c2>c1 && c2>c3)																														// Si los votos del candidato 2 son mayores que los del candidato 1 & y candidato 3
	{
		cout<<"\n\n\n\n*El ganador es el candidato 2, con "<<c2<<" votos*";																	// Imprime en consola el ganador es candidato 2 y su total de votos
	}
	else
	{
		if(c3>c1 && c3>c2)																													// Si los votos del candidato 3 son mayores que los del candidato 1 & y candidato 2
		{
				cout<<"\n\n\n\n*El ganador es el candidato 3, con "<<c3<<" votos*"; 												        // Imprime en consola el ganador es candidato 3 y su total de votos
		}
		else
		{
			if (c1==c2)																													    // Si el candidato 1 y el candidato 2 tuvieron los mismos votos
			{
				cout<<"\n\n";																												// Agrega dos saltos de linea
				cout<<"\t\t Hay un empate entre el candidato 1 y el candidato 2, Ambos obtuvieron: "<<c1<<" votos.";						// Imprime en consola el empate de los candidatos y su total de votos
			}
			else																															// De lo contrario
			{
				if(c2==c3)																													// Si el candidato 2 y el candidato 3 tuvieron los mismos votos
				{
				cout<<"\n\n";																												// Agrega dos saltos de linea
				cout<<"\t\t Hay un empate entre el candidato 2 y el candidato 3, Ambos obtuvieron: "<<c2<<" votos.";						// Imprime en consola el empate de los candidatos y su total de votos
				}
				else																														// De lo contrario
				{
			      if(c3==c1)																												// Si el candidato 2 y el candidato 3 tuvieron los mismos votos
				   {
				   	cout<<"\n\n";																											// Agrega dos saltos de linea
				    cout<<"\t\t Hay un empate entre el candidato 1 y el candidato 2, Ambos obtuvieron: "<<c3<<" votos.";                    // Imprime en consola el empate de los candidatos y su total de votos
				}
			  	   }	
				}
			}
		}

		return 0;
	}
	
