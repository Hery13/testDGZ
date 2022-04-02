#ifndef _UTILS_H_
#define _UTILS_H_
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXBUFFEUR  256
//struct for storing  brands
typedef struct
{
    int nb_char;
    char nom[MAXBUFFEUR];
    int value;
}brands;

//prototype for reading file
brands *readDataBrands(char *fname, int *rows);
//prototype for print data
void printDataBrands(brands *data, int *rows);
//prottotype for counting brands
void countingBrands(brands *data, char *b);
//protoype free  data
void freeBrands(brands *data);

#endif