#include"utils.h"

/*
* Function to read data 
*input: file name
*/
brands *readDataBrands(char *fname)
{

    //check file
    if (fname == NULL)
    {
        printf("Error read file %s",__func__);
        exit(0);
    }
    //open file
    FILE *f = fopen(fname,"r+");

    int nb = 0;
    char c=' ';

  //check the number of element in file
    while((c=fgetc(f))!=EOF)
     {
        if(c == '\n')
        {
            nb++;
        }        
     }

    brands *data = NULL;
    data = (brands*)malloc(sizeof(brands)*nb);
    rewind(f);
    
    fscanf(f,"%d", &data->number);

    //check if number different number of brands
    if (data->number != nb-1)
    {
        printf("Number rows is different of the number brands\n");
        exit(0);
    }


    for (int i = 0; i < data->number; i++)
    {
        fscanf(f, "%s %d", data[i].nom, &(data[i].value));
    }
    
    fclose(f);

    return data;
}

/*
*Function to print data 
*input: pointer data
*/
void printDataBrands(brands *data)
{
    printf("Number row : %d \n", data->number);

    for (int i = 0; i < data->number; i++)
    {
        printf("%s %d \n", data[i].nom, data[i].value);
    }
    
}