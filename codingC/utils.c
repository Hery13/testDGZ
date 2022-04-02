#include"utils.h"

/*
* Function to read data 
*input: file name
*/
brands *readDataBrands(char *fname, int *rows)
{

    //check file name
    if (fname == NULL)
    {
        printf("Error read file %s",__func__);
        exit(0);
    }

    brands *data =NULL;
    //open file
    FILE *f = fopen(fname,"rb");
    //check file
    if(f == NULL)
    {
        printf("Error");
        exit(-1);
    }

    //check number of rows
    if (fread(rows,sizeof(int),1,f) != 1)
    {
        return NULL;
    }
    
    //allocation table to store data
    data =(brands*)malloc(sizeof(brands)* *rows);

    if (fread(data,sizeof(brands),*rows,f) != *rows)
    {
        freeBrands(data);
        return NULL;
    }
    
    //check end of file
    if (fclose(f) == EOF)
    {
        freeBrands(data);
    }
    
    return data;
}

/*
*Function to print data 
*input: pointer data
*/
void printDataBrands(brands *data, int *rows)
{
    
  printf("Number rows : %d \n", *rows);

  for (int i = 0; i < *rows; i++)
  {
      printf("%s %d \n", data[i].nom, data[i].value);
  }
  
}

/*
*function to counting brands
*input:data and brands
*/
void countingBrands(brands *data, char *b)
{

}

/*
*free allocation
*/
void freeBrands(brands *data)
{
   free(data);
}