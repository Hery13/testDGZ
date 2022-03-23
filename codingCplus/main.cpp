/*Author Hery ANDRIANANTENAINA
*this program allows to read the number of items stored in a binary file and to sum the same data
*
*Execution:
*./bin [file]
*file  : binary file
*
*/
#include<iostream>
#include"utils.hpp"


int main(int argc, char **argv)
{
    char *fname = argv[1];
    //call class utils
    task b;
    b.loadDataBrands(fname);
    
    return 0;
}