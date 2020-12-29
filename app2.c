#include "stdio.h"

int div(unsigned long long number,int divby){
	if (number%divby==0)
		return 1;
	else
	if (divby>2)
		div(number, divby-1);
	else 
		return 0;
}

int main(int argc, char** argv) {
unsigned long long numb;

if (argc=1) {
printf("digite o numero para o qual deseja encontrar primos: ");
scanf("%llu", &numb);
} else {
numb = (unsigned long long) argv[1];
}
unsigned long long i;
for (i=3; i<numb; i++) {
	if (div(i, i/2)==0) 
		printf("numero primo %llu\n", i);
	}
	return 0;
}
