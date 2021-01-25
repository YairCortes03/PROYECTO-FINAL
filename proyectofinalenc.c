#include<stdio.h>
int main()
{
	//variables a utilizar
	int op,op2,op3,a,b,c,d,h,g,total;
	char aa=160, ae=130, ai=161, ao=162, au=163;
	//apuntador al archivo
	FILE *f;
	f=fopen("Total del video.txt","w");
		//presentacion del programa
		printf("\t\t BIENVENIDO \n");
		do 
	{
		//mostrar el menú
		printf("1) GENERAR NUEVO COMPROBANTE  \n2) SALIR \n");	
		//solicitar la opción
		printf("Elige una opci%cn\n",ao);
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				printf("\t RESOLUCION FINAL DEL VIDEO\n" );
					//mostrar el SUB menú
					printf("1) 1080p, 60fps \n2) 720p,30 \n3)480p,20 fps\n");	
					//solicitar la opción
					printf("Elige una opci%cn\n",ao);
					scanf("%d",&op2);
					switch(op2)
					{
					case 1:
						a=10;
					break;
					case 2:
						a=7;
					break;
					case 3:
						a=5;
					default:
					printf("opci%cn no v%clida\n",ao,aa);
					break;
					}
				printf("\t CANTIDAD DE EFECTOS ESPECIALES\n" );
					//mostrar el SUB menú
					printf("1) EFECTOS EN MAS DEL 70% \n2) EFECTOS EN MAS DEL 50% \n3)EFECTOS EN MENOS DEL 50%\n");	
					//solicitar la opción
					printf("Elige una opci%cn\n",ao);
					scanf("%d",&op3);
					switch(op3)
					{
					case 1:
						b=20;
					break;
					case 2:
						b=10;
					break;
					case 3:
						c=5;
					default:
					printf("opci%cn no v%clida\n",ao,aa);
					break;
					}
				printf("\t CANTIDAD DE EFECTOS ESPECIALES AVANZADOS\n" );
					//SOLICITA LA CANTIDAD NETA	
					//solicitar la opción
					printf("Ingrese la cantidad de efectos creados\n",ao);
					scanf("%d",&c);
					d=c*5;
				printf("\t CANTIDAD DE HORAS DEMORADAS\n" );
					//SOLICITA LA CANTIDAD NETA	
					//solicitar la opción
					printf("Ingrese la cantidad de horas en las que se realizó\n",ao);
					scanf("%d",&h);
					g=h*15;
				total=a+b+d+g;
				fprintf(f,"\t\t EDICIONES YayoCort \n");
				fprintf(f,"\t\t Clienete: AnNe Plays \n");
				fprintf(f,"\t\t RESOLUCION FINAL DEL VIDEO.....%d $ \n",a);
				fprintf(f,"\t\t EFECTOS ESPECIALES NORMALES....%d $ \n",b);
				fprintf(f,"\t\t EFECTOS ESPECIALES AVANZADOS...%d $ \n",d);
				fprintf(f,"\t\t HORAS DEMORADAS %d .............%d $ \n",h,g);
				fprintf(f,"\t\t TOTAL A PAGAR.................%d $ \n",total);
				printf("COMPROBANTE GENERADO \n");	
				fclose(f);
				break;
			default:
				printf("\n");
				break;
		}
	}while(op!=2);
	printf("Gracias por usar mi programa :)\n");

	return 0;
}