#include <stdio.h>
#include <stdlib.h>



int main(){
	char a = 'a';
	char b = 'b';
	char c[2] = {a, b};

	printf("%c\n", a);
	printf("%c\n", b);
	printf("%c, %c\n", c[0], c[1]);
}