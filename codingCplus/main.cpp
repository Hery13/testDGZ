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
    char choice = ' ';

    //call class utils
    task b;
    b.loadDataBrands(fname);
    b.printDataBrands();

    cout<< "Do you want counting brands[Y/N] : ";
    cin>>choice;

    if (choice == 'N' || choice == 'n')
    {
        exit(0);
    }
    else if (choice == 'Y' || choice == 'y')
    {
        char nameBrands[20];

        cout<< "Enter brands :";
        cin>>nameBrands;

        b.countingBrand(nameBrands);
    }
    
    return 0;
}