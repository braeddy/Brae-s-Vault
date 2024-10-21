#define _GNU_SOURCE   // avverte che usiamo le estensioni GNU 
#include <stdio.h>    // permette di usare scanf printf etc ...
#include <stdlib.h>   // conversioni stringa/numero exit() etc ...
#include <stdbool.h>  // gestisce tipo bool (per variabili booleane)
#include <assert.h>   // permette di usare la funzione assert
#include <string.h>   // funzioni di confronto/copia/etc di stringhe

bool n3(int k){
    if(k%3==0){
        return true;
    };
    return false;
};

bool n5(int k){
    if(k%5==0){
        return true;
    };
    return false;
};


int main (int argc, char *argv[]){
    int n;
    printf("Inserisci un numero N: ");
    int e = scanf("%d",&n);
    if(e!=1) {
        puts("Valore non trovato");
        exit(1);
    };
    if(n<=0){
        puts("N deve essere un valore maggiore di 0");
        exit(2);
    }

    //creo l'array a 
    int *a;
    int aLenght = 10;
    a = malloc(aLenght * sizeof(int));
    if(a==NULL){
        puts("Malloc fallita");
        exit(3);
    };

    //riempio l'array a
    int indxa=0;
    for(int i=3; i<=n; i++){
        if (n3(i) && !n5(i)){
            if(indxa==aLenght){
                aLenght = 2*aLenght;
                a = realloc(a, aLenght*sizeof(int));
                if(a==NULL){
                    puts("Realloc fallita");
                    exit(4);
                };
            };
            a[indxa] = i;
            indxa++;
        };
        
    };

    aLenght=indxa;
    a = realloc(a, aLenght*sizeof(int));
    if(a==NULL){
        puts("Realloc fallita");
        exit(4);
    };

    //creo l'array b
    int *b;
    int bLenght = 10;
    b = malloc(bLenght * sizeof(int));
    if(b==NULL){
        puts("Malloc fallita");
        exit(3);
    };

    //riempio l'array b
    int indxb=0;
    for(int i=5; i<=n; i++){
        if (n5(i) && !n3(i)){
            if(indxb==bLenght){
                bLenght = 2*bLenght;
                b = realloc(b, bLenght*sizeof(int));
                if(b==NULL){
                    puts("Realloc fallita");
                    exit(4);
                };
            };
            a[indxb] = i;
            indxb++;
        };
        
    };

    bLenght=indxb;
    b = realloc(b, bLenght*sizeof(int));
    if(b==NULL){
        puts("Realloc fallita");
        exit(4);
    };

    //stampo a 
    int sommaA = 0;
    for(int i=0; i<indxa; i++){
        sommaA += a[i];
    };
    printf("La lunghezza dell'array a e'%d\n", indxa);
    printf("La somma degli elementi di a e'%d\n", sommaA);

    //stampo b
    int sommaB = 0;
    for(int i=0; i<indxb; i++){            
        sommaB += b[i];
    };
    printf("La lunghezza dell'array b e'%d\n", indxb);
    printf("La somma degli elementi di b e'%d\n", sommaB);

    //dealloco la memoria
    free(a);
    free(b);
    return(0);
};