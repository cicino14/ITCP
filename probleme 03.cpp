#include<stdio.h>
#include<stdlib.h>

main(){
int  T[100] ;
int i,j,k,n,nx;
     do {
      printf("donner n la taille du tableau ");
      scanf ("%d",&n);}
      while (n<0 || n>100);
      nx=n;
      for (i=0;i<n;i++){
     	printf("donner un element:  ");
    	scanf( "%d",&T[i]);
        }
      for (i=0;i<n;i++){
      	for(j=i+1;j<n;i++){
      		if (T[j]==T[i]){
      	
      			for (k=j;k<n;k++){
      				T[k]=T[k+1];
					
				  }
				 
			  }
		  }
	  }
	  printf("n=%d  ",n);
	  for (i=0;i<n;i++){
	  	printf("%d  ",T[i] );
	  }
	
}
