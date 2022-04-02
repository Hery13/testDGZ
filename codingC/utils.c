#include"utils.h"

/*
* Function to read data 
*input: file name
*/
void readDataBrands(char *fname)
{

    //check file
    if (fname == NULL)
    {
        printf("Error read file %s",__func__);
        exit(0);
    }
    //open file
    FILE *f = fopen(fname,"rb");
    //check file
    if(f == NULL)
    {
        printf("Error");
        exit(-1);
    }

    int nb = 0;
    brands *data;
    
  //check the number of element in file
    if ((fread(&nb,sizeof(int), 1, f) == 1) != 0)
    {
        printf("rows : %d \n", nb);    
    }
    
    data = (brands*)malloc(sizeof(brands) * nb);
    int i = 0;
    while (fread(&data[i], sizeof(brands), 1,f) && i < nb)
    {
        i++;
    }
    

   for (int i = 0; i < nb; i++)
    {
        printf("%d %s %d\n",data[i].nb_char, data[i].nom, data[i].value);      
    }
    
    fclose(f);

}

/*
*Function to print data 
*input: pointer data
*/
void printDataBrands(brands *data)
{
 
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
   
}