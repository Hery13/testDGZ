/**hedear file*/

#ifndef UTILS_HPP
#define UTILS_HPP
#include<iostream>
#include<cstring>
#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <cstdarg>
#include <memory>

using namespace std;

const int MaxBuffer = 50;

typedef struct 
{
    int number_car;
    char name[MaxBuffer];
    int value;
}data_t;


/*class for task*/
class task
{
  
public:
   
    //protoype to load data
    void loadDataBrands();
    //prototype to counting brands
    void countingBrand(char *mark);
    //destructor
    ~task();
};

#endif