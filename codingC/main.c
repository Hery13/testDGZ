/*Author Hery ANDRIANANTENAINA
*this program allows to read the number of items stored in a binary file and to sum the same data
*
*Execution:
*./bin [file]
*file : binary file
*
*/
#include<stdio.h>
#include<stdlib.h>
#include"utils.h"

int main(int argc, char **argv)
{
    char *name = argv[1];

    brands *d;

    d = readDataBrands(name);
    printDataBrands(d); 

    return 0;
}