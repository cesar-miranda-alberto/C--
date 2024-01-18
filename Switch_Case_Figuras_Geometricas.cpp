/*
										***** SWITCH CASE *****
	
	Descripción:
	El siguiente código calcula el perimetro y area de un figuras geometricas a selección del usuario a partir de
	los valores asignados por el implementando el metodo switch case para la selección de los triangulos 
	a calcular.
	Fecha: 23-Febrero-2021
	Version: 1.0
	
*/

#include <math.h>																													// Biblioteca de Matematicas
#include <iostream>																													// Biblioteca estandar  de entrada y salida de datos

using namespace  std;																												// Accesso a todas las funciones

main()																																// Función principal
{
	
	char op;																														// Variable  para las opciones
	float area, radio, alt, ba, lado;
	system ("color  f3");																											// Define el color de fondo blanco claro
	setlocale(LC_CTYPE, "Spanish"); 																								// Configura el idioma de la consola en español
	cout<<"Programa que calcula áreas de figuras geométricas";																		// Imprime en consola texto de titulo
	cout<<"\n\n";																													// Agrega dos saltos de linea
	cout<<" a) Triángulo";																											// Imprime en consola la opción a
	cout<<"\n\n";																													// Agrega dos saltos de linea
	cout<<" b) Círculo";																											// Imprime en consola la opción b
	cout<<"\n\n";																													// Agrega dos saltos de linea
	cout<<" c) Cuadrado";																											// Imprime en consola la opción c
	cout<<"\n\n";																													// Agrega dos saltos de linea
	cout<<" d) Rectángulo";																											// Imprime en consola la opción d
	cout<<"\n\n";																													// Agrega dos saltos de linea
    cout<<"Escoge una opción: ";																									// Imprime en consola texto de toma de requerimientos
    cin>>op;																														// Asigna el valor a la variable op
    switch(op)																														// Inicializa el metodo switch case
    {
    	
    	case 'a': 																													// Si se escoge la opción a
    	system ("cls");																												// Limpia el texto de pantalla
    	      cout<<"\n\nÁrea de un tringulo";																						// Solicita valores para el area del triangulo
    	      cout<<"\n\n";
    	      cout<<"¿Cuál es el valor de la base?: ";
    	      cin>>ba; 
    	      cout<<"\n\n";
	          cout<<"¿Cuál es el valor de la altura?: ";
    	      cin>>alt;
    	      area=(ba*alt)/2;
    	      cout<<"\n\nEl área del triangulo es: "<<area;
    	      cout<<"\n\n";
        break;																														// Frena el caso de la opción a
        case 'b':																													// Si se escoge la opción b
        	system ("cls");																											// Limpia el texto de pantalla
        	cout<<"\n\n     Área de un círculo";																					// Solicita valores para el área del círculo
        	cout<<"\n\n";
    	    cout<<"¿Cuál es el valor del radio?: ";
    	    cin>>radio; 
    	    area= 3.1416*pow(radio,2);
    	    cout<<"\n\nEl área del círculo es: "<<area;
    	    cout<<"\n\n\n";
    	break;																														// Frena la opción b
    	case 'c':																													// Si se escoge la opción c
    		system ("cls");																											// Limpia el texto de pantalla
    		cout<<"\n\n      Área de un cuadrado";																					// Solicita valores para el área del cuadrado
    		cout<<"\n\n";
    	    cout<<"¿Cuál es el valor del lado?: ";
    	    cin>>lado;
    	    area=pow(lado,2);
    	    cout<<"\n\nEl área del cuadrado es: "<<area;
    	    cout<<"\n\n";
    	break;																														// Frena el caso c
    	case 'd':																													// Si se escoge la opción d
    		system ("cls");																											// Limpia el texto de la pantalla
    		cout<<"\n\nt   Área de un rectangulo";																					// Solicita los datos para el área del rectangulo
    		cout<<"\n\n";
    	    cout<<"¿Cuál es el valor de la base?: ";
    	    cin>>ba;
    	    cout<<"\n\n";
    	    cout<<"¿Cuál es el valor de la altura?: ";
    	    cin>>alt;
    	    area=ba*alt;
    	    cout<<"\n\nEl área del rectangulo es: "<<area;
    	    cout<<"\n\n";
    	break;																														// Frena el caso d
    	default: cout<<"\n\n !!Error vuelve a intentarlo!!";   																		// Imprime texto en default en caso de escoger opción incorrecta
    	      
  }
  
  		return 0;																													// Programa terminado exitosamente
}
