#include<stdio.h>

int main(){
	
	int x, y, x2, y2;
	
	scanf("%d %d", &x, &y);
	
	x2=x-x*2;
	y2=y-y*2;
	
	if(x<=100 && x>=1 && y<=100 && y >=1){
		printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n", x, y, y, x, y, x2,x, y2, x2, y2, y2, x2, y2, x, x2, y);
	}
	else printf("Erro\n");
	
}
