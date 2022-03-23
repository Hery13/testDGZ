/*Author Hery ANDRIANANTENAINA
*this program allows to read the number of items stored in a binary file and to sum the same data
*
*Execution:
*./bin [file] [brands]
*file  : binary file
*brands: the brands we need a total counting
*/
#include<stdio.h>
#include<stdlib.h>
#include"utils.h"

int main(int argc, char **argv)
{
    char *name = argv[1];
    char *b = argv[2];

    brands *d;

    d = readDataBrands(name);

    //print data
    printDataBrands(d); 
    //counting brands
    countingBrands(d,b);
    //free
    freeBrands(d);

    return 0;
}