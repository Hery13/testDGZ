#include"utils.hpp"

/*
* function to load data in binary file
*input : file name
*/
void task::loadDataBrands(char *fname)
{
    /*ckeck pointeur fname*/

    if (fname == nullptr)
    {
        cout<<"Error  to load data"<< endl;
        exit(0);
    }
    
    FILE *fp = fopen(fname,"rb+");
    //check file
    if (!fp)
    {
        exit(1);
    }
    //counting number rows in file
    while ((c=fgetc(fp)) != EOF)
    {
        if (c == '\n')
        {
            nb++;
        }     
    }
    //allocation for store data
    data = new brands[nb];
    rewind(fp);

    //affect value
    fscanf(fp,"%d", &data->rows);
    
    for (int i = 0; i < data->rows ; i++)
    {
        fscanf(fp, "%s %d", data[i].nom, &data[i].value);
    }
}

/*
*function to print data brands
*/
void task::printDataBrands()
{
    cout<<"rows :"<<data->rows<<endl;

    for (int i = 0; i < data->rows ; i++)
    {
       cout<< data[i].nom<< "\t" << data[i].value <<endl;
    }
    
}
task::~task()
{
    delete data;
}
