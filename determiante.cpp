#include<stdio.h>

main()
{
	
	float a, b, c, d, det;
	
	
	printf("\n\nprog calcular o determinante de uma matriz 2x2");
	printf("\nconsidere a matriz ");
	printf("\n | A  B | \n | C  D |\n\n");
	 
	 printf("digite um numero para letra a: ");
	  scanf("%f", & a);
	
	printf("digite um numero para letra b: ");
	  scanf("%f", & b);
	
	 printf("digite um numero para letra c: ");
	  scanf("%f", & c);
	
	 printf("digite um numero para letra d: ");
	  scanf("%f", & d);
	
	
	det= (a*d) - (b*c);
	printf("\no valor do determiante e: %2.2f", det);
	
	
	
	
	
	
	
}















