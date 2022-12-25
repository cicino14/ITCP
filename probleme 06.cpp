#include<stdio.h>
#include<stdlib.h>
int linearSearch(int a[], int n, int key) {
int pos = -1;
for (int i = 0; i < n; ++i) {
    if (a[i] == key) {
    pos = i;
    break;
    }
}
return pos;
}

  main(){
  	int T[100];
	int n,i,existe;
  	
  	
  do {
      printf("donner n la taille du tableau ");
      scanf ("%d",&n);}
      while (n<0 || n>100);
      
      for (i=0;i<n;i++){
     	printf("donner un element:  ");
    	scanf( "%d",&T[i]);
        }
        existe = linearSearch(T, n, 1 );
        printf("la valeur %d",existe);
        return 0;
		
		
}
