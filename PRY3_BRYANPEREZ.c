/**********************************************************************
    Instituto Tecnológico de Costa Rica
    Estructuras de Datos IC-2001
    I Semestre 2018
    Profesora: Samanta Ramijan Carmiol
    Carnet: 
    	   2017120035
	Alumno: 
		Bryan Pérez Rojas
	Proyecto: Rutas entre hospitales
**********************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
	return menu ();
}

int menu (){
	int option = 0;
	while(option!=3){
		printf("--------------------------------------------------------------------\n");
		    printf("|                                                                  |\n");
		    printf("|                         MENU PRINCIPAL                           |\n");
		    printf("--------------------------------------------------------------------\n");
		    printf("|               1. About                                           |\n");
		    printf("|               2. Help                                            |\n");
		    printf("--------------------------------------------------------------------\n");
		    printf("|               3. Exit                                            |\n");
		    printf("--------------------------------------------------------------------\n");
		   	printf("Select the option: ");
		    scanf("%i",&option);
			if(option==1) {
				showAbout();
			} else if(option==2) {
				showHelp();
			}
		}	
}

/*
La siguiente funcion lo que hara es simplemente desplegar informacion
acerca de del programa, institucion, curso, objetivo, lenguaje y nombre y carne del estudiante
que lo desarrollo
*/
int showAbout (){
	    printf ("\n\t\t*****************************************************************\n");
	    printf ("\t\t*\t\tooooooooooooo oooooooooooo   .oooooo.   \t*\n");
	    printf ("\t\t*\t\t8'   888   `8 `888'     `8  d8P'  `Y8b  \t*\n");
	    printf ("\t\t*\t\t     888       888         888          \t*\n");
	    printf ("\t\t*\t\t     888       888oooo8    888          \t*\n");
	    printf ("\t\t*\t\t     888       888    ""     888        \t\t*\n");
	    printf ("\t\t*\t\t     888       888       o `88b    ooo  \t*\n");
	    printf ("\t\t*\t\t    o888o     o888ooooood8  `Y8bood8P'  \t*\n");
	    printf ("\t\t*****************************************************************\n");
	    printf ("\t\t*****************************************************************\n");
	    printf ("\t\t*Objetivo:\t\t\t\t\t\t\t*\n");
	    printf ("\t\t*\tRutas entre hospitales\t\t\t\t\t*\n");
	    printf ("\t\t*Lenguaje utilizado:\t\t\t\t\t\t*\n");
	    printf ("\t\t*\t\t C \t\t\t\t\t\t*\n");
	    printf ("\t\t*Curso:\t\t\t\t\t\t\t\t*\n");
	    printf ("\t\t*\tEstructuras de Datos\t\t\t\t\t*\n");
	    printf ("\t\t*Desarrollador: \t\t\t\t\t\t*\n");
	    printf ("\t\t*\t Bryan Perez Rojas - 2017120035\t\t\t\t*\n");
	    printf ("\t\t*****************************************************************\n\n");
}



/*
La siguiente funcion lo que hara es mostrar los comandos disponibles para el programa, estos comandos
no se pueden utilizar tal cual, ya que para eso se diseño un menu especial en el cual se puede
navegar por medio de los numeros que son respectivos a cada opcion
*/
int showHelp (){
	printf ("\n\t*************************************************************************\n");
	printf ("\t*\t\t\tLos comandos disponibles son \t\t\t*\n");
	    printf ("\t*1. Help\t\t\t\t\t\t\t\t*\n");
	    printf ("\t*\tDespliega los comandos que pueden ser utilizados en el programa\t*\n");
	    printf ("\t*\t\t\t\t\t\t\t\t\t*\n");
	    printf ("\t*2. About\t\t\t\t\t\t\t\t*\n");
	    printf ("\t*\tDespliega informacion relevante sobre el programa \t\t*\n");
	    printf ("\t*************************************************************************\n\n");

}

