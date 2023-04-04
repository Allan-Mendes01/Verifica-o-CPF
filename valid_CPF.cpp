#include <stdio.h>

int main () {

int a,b,c,d,e,f,g,h,i,j,k,v1,v2;

printf("digite seu cpf (favor digitar numero por numero(numero + enter)) \n");
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
printf(".\n");
scanf("%d", &d);
scanf("%d", &e);
scanf("%d", &f);
printf(". \n");
scanf("%d", &g);
scanf("%d", &h);
scanf("%d", &i);
printf("-\n");
scanf("%d", &j);
scanf("%d", &k);.+

v1 = ((a * 10) + (b * 9) + (c * 8) + (d * 7) + (e * 6) + (f * 5) + (g * 4) + (h * 3) + (i * 2)) % 11;

	if (v1>=2) {
		v1 = 11-v1;
	}else {
		v1 = 0;
	}

if (v1 == j) {
	
	v2 = ((a * 11 )+ (b * 10) + (c * 9) + (d * 8) + (e * 7) + (f * 6) + (g * 5) + (h * 4) + (i * 3) + (j * 2)) % 11;
	
		if (v2>=2) {
			v2 = 11 - v2;
		}else {
			v2 = 0;
		}
		
	if(v2 == k) {
		printf("cpf Valido");
	}
	
	else("cpf invalido");
}
else {
	printf("cpf invalido");
}

return 0;
}
