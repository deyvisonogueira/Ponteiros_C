#include <stdio.h>
#include <stdlib.h>

int main (){
	int n,i;
	int *v;
	printf("Tamanho do vertor: ");
	scanf("%d",&n);
	v = malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
	v[i]= i*2;
	printf ("%d|", v[i]);
}//fim do for
	return 0;
}
