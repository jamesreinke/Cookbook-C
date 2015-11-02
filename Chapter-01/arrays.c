#include <stdio.h>

int main()
{
	int c, i, nwhite, nother;
	int size = 10;
	int ndigit[size];
	
	nwhite = nother = 0;
	for (i = 0; i < size; ++i){
		ndigit[i] = 0;
	}
	while ((c = getchar()) != EOF){
		if (c >= '0' && c <= '9') 
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t') 
			++nwhite;
		else
			++nother;
	}
	printf("digits =");
	for (i = 0; i < size; ++i)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n", nwhite, nother);
	
		
}