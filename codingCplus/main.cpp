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
    unique_ptr<task>data = make_unique<task>();
    data->loadDataBrands();
    
    return 0;
}