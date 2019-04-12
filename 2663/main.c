/*#include <stdio.h>
#include <stdlib.h>

int comparador(const void * v1, const void * v2){
    if((int*) v1 > (int*)v2){
        return -1;
    } else if((int*)v1 < (int*)v2){
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n, k, i;
    scanf("%d %d", &n, &k);
    int vet[n];
    //vet = (int*) malloc(sizeof(int)*n);

    for(i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }

    qsort(vet, n, sizeof(int), comparador); //vetor,tamanho,tipo, função de ordenação

    for(i=0; i<n; i++){
        printf("%d ", vet[i]);
    }

    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
    //return ( *(int*)b - *(int*)a );

    if(*(int*) a > *(int*)b){
        return -1;
    } else if(*(int*)a < *(int*)b){
        return 1;
    } else {
        return 0;
    }
}

int main () {
    int n, k, i;
    scanf("%d %d", &n, &k);
    int values[n];

    for( i = 0 ; i < n; i++ ) {
        scanf("%d", &values[i]);
    }

    qsort(values, n, sizeof(int), cmpfunc);

    while (values[k-1] == values[k]) {
        if(k==n){
            break;
        }
        k++;
    }

    printf("%d\n", k);

    return(0);
}


 

