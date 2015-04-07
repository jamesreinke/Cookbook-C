#include <stdio.h>

/* print Fahrenheit-Celsius table
	for fahr = 0, 20 ... */
main(){
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0; /* lower limit of temperature table */
	upper = 300; /*upper limit */
	step = 20;
	fahr = lower;
	printf("Fahrenheit to Celsius\n");
	while(fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	printf("Celsius to Fahrenheit");
	lower = -50;
	upper = 150;
	step = 5;
	celsius = lower;
	while(celsius <= upper){
		fahr = (9.0 / 5.0) * celsius + 32;
		printf("%6.1f %3.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}