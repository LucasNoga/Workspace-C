#include <stdio.h>

void inverser(int a, int b){
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}

int main(){
	int a = 1;
	int b = 2;
	printf("a: %d\nb: %d\n", a, b);
	inverser(a,b);
	printf("a: %d\nb: %d\n", a, b);
}

