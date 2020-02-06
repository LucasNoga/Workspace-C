//
// Created by lucas noga on 23/04/2017.
//
#include <stdio.h>

int main(void){
    int T=22;
	int code[T]={1,0,0,1,0,1,0,0,0,0,0,0,1,1,0,0,0,0,1,1,1,0,0};
	int P[T]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int N[T]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int volt=-1;
	int viol=-1;
	int nbzero=0;
	int n=0;

	puts("Entrez votre n (HdBn)) >=2");
	do{
		scanf("%i",&n);
	}
	while(n<2);

	for(int incremente=0;incremente<T;incremente++){
		if(code[incremente]==1){
			if(volt==-1){
				P[incremente]=1;
				volt=1;
			}
			else{
				N[incremente]=1;
				volt=-1;
			}
			nbzero=0;
		}
		else{
			nbzero++;
			if(nbzero==n+1){
				hdbn(incremente,code,P,N,&volt,&viol,n);
				nbzero=0;
			}
		}
	}

	for(incremente=0;incremente<T;incremente++){
		printf("%i ",P[incremente]-1*N[incremente]);
	}

	printf("\n");

	return 0;
}

int reset(int P[T],int N[T]){
	int volt;
	int i;
	for(i=0;i<T;i++){
		P[i]=0;
		N[i]=0;
	}
	volt=-1;
	return volt;
}

int hdbn(int incremente, int code[T], int P[T], int N[T], int* volt, int* viol, int n){
	if(*viol==1){
		if(*volt==1){
			N[incremente-n]=1;
			N[incremente]=1;
			*volt=-1;
			*viol=-1;
		}
		else{
			N[incremente]=1;
			*volt=-1;
			*viol=-1;
		}
	}
	else{
		if(*volt==1){
			P[incremente]=1;
			*viol=1;
			*volt=1;
		}
		else{
			P[incremente-n]=1;
			P[incremente]=1;
			*viol=1;
			*volt=1;
		}
	}
}