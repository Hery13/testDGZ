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

    //check element for each brands
   for (int i = 0; i < *rows; i++)
   {
        if(fread(&data[i].nb_char, sizeof(int),1,f));
        if(fread(data[i].nom, sizeof(char),data[i].nb_char,f))
        {
            data[i].nom[data[i].nb_char]='\0';
        }
        if(fread(&data[i].value, sizeof(int),1,f));
   }
    
    //check end of file
    fclose(f);
      
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
      printf("%s %d\n", data[i].nom , data[i].value);
  }  
}

/*
*function to counting brands
*input:data and rows
*/
void countingBrands(brands *data, int *rows)
{
    brands data_count[*rows];

    //initialize the first brands in data_count
    strcpy(data_count[0].nom,data[0].nom);
    data_count[0].value = data[0].value;
    int size_count = 1;

    int discovery = 1;

    for (int i = 1; i < *rows; i++)
    {
        for (int j = 0; j < size_count; j++)
        {
            if ((strcmp(data_count[j].nom, data[i].nom)) == 0)
            {
                data_count[j].value += data[i].value;
                discovery = 0;
            }
        }
        
        if(discovery)
        {
            strcpy(data_count[size_count].nom, data[i].nom);
            data_count[size_count].value=data[i].value;
            size_count++;
        }

        discovery = 1;
    }
    
    //print total per brands
    printf("*************Total per brands***********\n");

    for (int i = 0; i < size_count; i++)
    {
      printf("%s %d\n", data_count[i].nom , data_count[i].value);
    } 
}

/*
*free allocation
*/
void freeBrands(brands *data)
{
   free(data);
}