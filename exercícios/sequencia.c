#include <stdio.h>
#include <stdlib.h>
//funcao 
float sequencia(int n) {
  float termo;
  //calcula os 3 primeiros n na sequencia
  if (n==0) {  //se n
    return(0); //retorna n
  }
  if (n==1) {
    return(7);
  }
  if (n==2) {
    return(3);
  }
  //calcula o termo(n-1)
  termo = sequencia(n-1)+3*sequencia(n-2)-0.5*sequencia(n-3);
  return(termo);
}
// Funcao principal.
int main() {
  int n,i;
  float *term; 
  //pede o numero da sequencia
  scanf("%d", &n);
  //alocando o vetor da sequencia
  term = (float *)malloc(sizeof(float)*(n+1));
  //imprimindo
  printf("(");
  for(i=0; i<=n; i++){ //laco que percorre na sequencia n no vetor
    term[i]=sequencia(i); 
    if(i==n) //exibi o termo 
      printf("%.2f)\n", term[i]);
    else
      printf("%.2f, ", term[i]);
  }

  return 0;
}  