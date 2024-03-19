#ifndef TP1_FUNCTIONS_H
#define TP1_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct dataSet {
    //Attributes of the instance
    //Nombre d'objets
    int n;
    //Capacite b
    int b;
    //Tableau d'entiers de taille n contenant la valeur de chacun des objets
    int* c;
    //Tableau d'entiers de taille n contenant le poids de chacun des objets
    int* a;
} dataSet;

typedef struct Objet {
    int index;      // Index de l'objet
    double utility; // Utilité de l'objet (c[a] / a[a])
} Objet;

int read_TP1_instance(FILE* fin, dataSet* dsptr);
int* KP_greedy(dataSet* dsptr);
double* KP_LP(dataSet* dsptr);

#endif
