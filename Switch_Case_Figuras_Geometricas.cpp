/*
										***** SWITCH CASE *****
	
	Descripci�n:
	El siguiente c�digo calcula el perimetro y area de un figuras geometricas a selecci�n del usuario a partir de
	los valores asignados por el implementando el metodo switch case para la selecci�n de los triangulos 
	a calcular.
	Fecha: 23-Febrero-2021
	Version: 1.0
	
*/

#include <math.h>																													// Biblioteca de Matematicas
#include <iostream>																													// Biblioteca estandar  de entrada y salida de datos

using namespace  std;																												// Accesso a todas las funciones

main()																																// Funci�n principal
{
	
	char op;																														// Variable  para las opciones
	float area, radio, alt, ba, lado;
	system ("color  f3");																											// Define el color de fondo blanco claro
	setlocale(LC_CTYPE, "Spanish"); 																								// Configura el idioma de la consola en espa�ol
	cout<<"Programa que calcula �reas de figuras geom�tricas";																		// Imprime en consola texto de titulo
	cout<<"\n\n";																													// Agrega dos saltos de linea
	cout<<" a) Tri�ngulo";																											// Imprime en consola la opci�n a
	cout<<"\n\n";																													// Agrega dos saltos de linea
	cout<<" b) C�rculo";																											// Imprime en consola la opci�n b
	cout<<"\n\n";																													// Agrega dos saltos de linea
	cout<<" c) Cuadrado";																											// Imprime en consola la opci�n c
	cout<<"\n\n";																													// Agrega dos saltos de linea
	cout<<" d) Rect�ngulo";																											// Imprime en consola la opci�n d
	cout<<"\n\n";																													// Agrega dos saltos de linea
    cout<<"Escoge una opci�n: ";																									// Imprime en consola texto de toma de requerimientos
    cin>>op;																														// Asigna el valor a la variable op
    switch(op)																														// Inicializa el metodo switch case
    {
    	
    	case 'a': 																													// Si se escoge la opci�n a
    	system ("cls");																												// Limpia el texto de pantalla
    	      cout<<"\n\n�rea de un tringulo";																						// Solicita valores para el area del triangulo
    	      cout<<"\n\n";
    	      cout<<"�Cu�l es el valor de la base?: ";
    	      cin>>ba; 
    	      cout<<"\n\n";
	          cout<<"�Cu�l es el valor de la altura?: ";
    	      cin>>alt;
    	      area=(ba*alt)/2;
    	      cout<<"\n\nEl �rea del triangulo es: "<<area;
    	      cout<<"\n\n";
        break;																														// Frena el caso de la opci�n a
        case 'b':																													// Si se escoge la opci�n b
        	system ("cls");																											// Limpia el texto de pantalla
        	cout<<"\n\n     �rea de un c�rculo";																					// Solicita valores para el �rea del c�rculo
        	cout<<"\n\n";
    	    cout<<"�Cu�l es el valor del radio?: ";
    	    cin>>radio; 
    	    area= 3.1416*pow(radio,2);
    	    cout<<"\n\nEl �rea del c�rculo es: "<<area;
    	    cout<<"\n\n\n";
    	break;																														// Frena la opci�n b
    	case 'c':																													// Si se escoge la opci�n c
    		system ("cls");																											// Limpia el texto de pantalla
    		cout<<"\n\n      �rea de un cuadrado";																					// Solicita valores para el �rea del cuadrado
    		cout<<"\n\n";
    	    cout<<"�Cu�l es el valor del lado?: ";
    	    cin>>lado;
    	    area=pow(lado,2);
    	    cout<<"\n\nEl �rea del cuadrado es: "<<area;
    	    cout<<"\n\n";
    	break;																														// Frena el caso c
    	case 'd':																													// Si se escoge la opci�n d
    		system ("cls");																											// Limpia el texto de la pantalla
    		cout<<"\n\nt   �rea de un rectangulo";																					// Solicita los datos para el �rea del rectangulo
    		cout<<"\n\n";
    	    cout<<"�Cu�l es el valor de la base?: ";
    	    cin>>ba;
    	    cout<<"\n\n";
    	    cout<<"�Cu�l es el valor de la altura?: ";
    	    cin>>alt;
    	    area=ba*alt;
    	    cout<<"\n\nEl �rea del rectangulo es: "<<area;
    	    cout<<"\n\n";
    	break;																														// Frena el caso d
    	default: cout<<"\n\n !!Error vuelve a intentarlo!!";   																		// Imprime texto en default en caso de escoger opci�n incorrecta
    	      
  }
  
  		return 0;																													// Programa terminado exitosamente
}
