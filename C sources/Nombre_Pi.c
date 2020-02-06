//il faut creer 2 methodes une qui calcule pi 3,14 et 
//une qui prend en parametre un nombre de decimal saisi par l'utilisateur et qui renvoie pi avec le nombre de decimale demandé

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

double frand_a_b(double a, double b){
    return ( rand()/(double) 1000000000 ) * (b-a) + a;
}

void function_pi(){
	int b = 1, a, c, d, e ,f , g, h;
	double pi = 4 / b;
	int i;
	for (i=0; i < 1000000; i++)
	{
		b += 2;
		pi = pi - 4./b;
		printf ("%.200f\n", pi);
		b += 2;
		pi = pi + 4./b;
		printf ("%.200f\n", pi);
	}
	d= d * b + f * (h ? a[b] : f/5), a[b] = d% -- g;
}

void get_pi(){
	srand(time(NULL));
	double pi;
	long nbPoints = 100000000000;
	double x,y;
	long nombreCercle=0;
		
	for(int i=0;i<nbPoints;i++){
		x = frand_a_b(1., 5.); 
		y = frand_a_b(1., 5.);
		//printf("x = %f\n", x);
		//printf("y = %f\n", y);
		//printf("%d: x + y = %f\n", i, x + y);
		/*test si le point est dans le cercle*/
		if(x*x + y*y <= 100) 
			nombreCercle++;
	}
	printf("%ld\n", nombreCercle);
	pi=((double)nombreCercle/nbPoints)*4;
	printf("%f\n", pi);
}






//Pour PI

int main(void){
	function_pi();

}
