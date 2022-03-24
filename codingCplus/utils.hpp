/**hedear file*/

#ifndef UTILS_HPP
#define UTILS_HPP
#include<iostream>
#include<cstring>
#include <cstdlib>
#include <cstdio>

using namespace std;

const int MaxBuffer = 50;

/*struct for data brands*/
typedef struct
{
    int rows;
    int value;
    char nom[50];
}brands;

/*class for task*/
class task
{

private:
    char c;
    int nb;
public:
    brands *data;

    task(){data == NULL;}
    //protoype to load data
    void loadDataBrands(char *fname);
    //prototype to print data
    void printDataBrands();
    //prototype to counting brands
    void countingBrand(char *mark);
    //destructor
    ~task();
};

#endif