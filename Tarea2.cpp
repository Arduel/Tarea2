#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void imp(void);
void rep(void);
void res(float &d);
void lrep(char &r);
void opt(int &opc);
void num(float &x);
float num2(float &x);
float suma(float &x, float &y);
float resta(float &x, float &y);
float mul(float &x, float &y);
float divi(float x, float &y);

void imp(void){
	printf("1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Salir\nSeleccione una opcion: ");
}

void opt(int &opc){
	scanf("%d", &opc);
	printf("\n");
	if(opc < 0 || opc >5){
		printf("-----------------------------\n");
		printf("Introduzca una opcion valida\n");
		printf("-----------------------------\n\n");
	}
}

void num(float &x){
	printf("Ingrese el primer numero: ");
    scanf("%f",&x);	
    printf("\n");
}

float num2(){
	float temp;
	printf("Ingrese el segundo numero: ");
    scanf("%f",&temp);
    printf("\n");
    return temp;
}

float suma(float &x, float &y){
	return x+y;	
}

float resta(float &x, float &y){
	return x-y;	
}

float mul(float &x, float &y){
	return x*y;	
}

float divi(float x, float &y){
	while(y == 0){
		printf("ERROR\nEl segundo numero debe ser diferente de 0\n");
		y = num2();
	}
	return x/y;	
}

void rep(void){
	printf("\n\nDesea hacer otra operacion :\nS / N\n");
}

void lrep(char &r){
	r = getch();
	printf("\n\n");
	if(r == 's' || r == 'S'){
	printf("-------------------------------------------------------------------\n\n");
	}
}

void res(float &d){
    printf("\nEl resultado de la operacion es: %.2f", d);	
}

int main(void){
	
	int op, f;
	float a, b, c;
	char rpt;
	
	do{
		do{
			imp();
			opt(op);
		}while((op > 4 && op != 5) || op < 1);
		f = 0;
		if(op > 0 && op < 5 && f == 0){
			num(a);
			b = num2();
			
			switch(op){
		        case 1:
		            c = suma(a,b);
		        break;
		        case 2:
		            c = resta(a,b);
		        break;
		        case 3:
		            c = mul(a,b);
		        break;
		        case 4:
		            c = divi(a,b);
		        break;
		    }
			
			res(c);
			rep();
			lrep(rpt);
    	}
    	else{
    		rpt = 'n';
		}
	}while(rpt == 's' || rpt == 'S');
	
}
