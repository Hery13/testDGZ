#include"utils.hpp"

/*
* function to load data in binary file
*input : file name
*/
void task::loadDataBrands()
{
    
   ifstream fp;
   
    fp.open("../counting.bin",ios::in | ios::binary);

   //check reading file
    if (!fp)
    {
       cout << "Cannot open file" << endl;
       exit(0);
    }

   int rows;

   fp.read(reinterpret_cast<char*>(&rows), sizeof(int));
   cout<<"Number rows: "<<rows<<endl;

   data_t data[rows];

   fp.read(reinterpret_cast<char*>(data),rows * sizeof(int));

   
   for (data_t& d : data)
   {
      cout<<d.name<<"\t"<<d.value<<endl;
   }
   
   fp.close();
}


/*
*function to counting brands
*/
void task::countingBrand(char *mark)
{
    
}

task::~task()
{
  
}
