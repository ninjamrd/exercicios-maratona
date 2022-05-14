#include<stdio.h>

int main(){
	
	double h, c, l, i, fim=0;
	
	while(fim==0){
	do{
	scanf("%lf %lf %lf", &h, &c, &l);
	}while ( h<0.0 || c<0.0 || l<0.0 );
	if(h==0.0 && c==0.0 && l==0.0){
		printf("\n");
		fim=1;
	}
	
	i=h*100/c;
	
	if(i<=8.334 && l>=0.80){
		printf("PROGETO SIMPLES\n");
	}
	else if (fim==0) printf("PROGETO ESPECIAL\n");
	}
}
