#include <stdio.h>
void inverser(int *x, int *y){
	int c = 0;
	c=*x;
	*x=*y;
	*y=c;
}
int main(){
	int a = 1;
	int b = 2;
	printf("a: %d\nb: %d\n", a, b);
	inverser(&a, &b);
	printf("a: %d\nb: %d\n", a, b);
	int *g;
	g = &a;
	printf("%d\n", *g);
}