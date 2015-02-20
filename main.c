#include <stdio.h>
#include <stdlib.h>

int const N=5;

int main(int argc, char** argv) {

  int vet[N];
 int i;
 int conta=0;
 
 
 for(i=0;i<N;i=i+1){
    
    printf("inserisci eta' della persona %d: \n",i);
    scanf("%d",&(vet[i]));
    
         
 
  
    
 if(vet[i]>=18){
     
     conta=conta+1;
     
 }
}   
  printf("i maggiorenni sono %d",conta);       

    
    
    
    
    return (EXIT_SUCCESS);
}

