#ifndef _UTILS_H_
#define _UTILS_H_
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXBUFFEUR  50
//struct for storing  brands
typedef struct
{
    int number;
    int value;
    char nom[MAXBUFFEUR];
}brands;

//prototype for reading file
brands *readDataBrands(char *fname);
//prototype for print data
void printDataBrands(brands *data);


#endif