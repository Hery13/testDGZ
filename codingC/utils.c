#include"utils.h"

/*
* Function to read data 
*input: file name
*/
brands *readDataBrands(char *fname)
{
    //open file
    FILE *f = fopen(fname,"r+");

    //check file
    if (!f)
    {
        printf("Error read file %s",fname);
        exit(0);
    }
   
    int nb;
    rewind(f);
    fscanf(f, "%d", &nb);

    brands *data = NULL;

    data = (brands*)malloc(sizeof(brands)*nb);

    data->number = nb;

    for (int i = 0; i < data->number; i++)
    {
        fscanf(f, "%s %d", &(data->nom), &(data->value));
    }
    
    return data;
}