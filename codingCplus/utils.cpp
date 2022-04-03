#include"utils.hpp"

/*
* function to load data in binary file
*/
void task::loadDataBrands()
{
    
   fstream fp;
   
    fp.open("../counting.bin",ios::in | ios::binary);

   //check reading file
    if (fp.fail())
    {
       cout << "Cannot open file" << endl;
       exit(0);
    }

   int rows =0;//variables for number of rows

   //check number rows in file
   fp.read(reinterpret_cast<char*>(&rows), sizeof(int));
   cout<<"Number rows: "<<rows<<endl;

   data_t data[rows],data_count[rows];

   for (int i = 0; i < rows; i++)
   {
      fp.read(reinterpret_cast<char*>(&data[i].number_car), sizeof(int));
      fp.read(reinterpret_cast<char*>(&data[i].name),data[i].number_car *sizeof(char));
      data[i].name[data[i].number_car]='\0';
      fp.read(reinterpret_cast<char*>(&data[i].value), sizeof(int));
   }
   //print brands
   cout<<"Data and counting brands"<<endl;
   for (data_t& d : data)
   {
      cout<<d.name<<"\t"<<d.value<<endl;
   }
   
   //initialize the first brands in data_count
   strcpy(data_count[0].name,data[0].name);
   data_count[0].value=data[0].value;
   int size_count=1;

   int discovery=1;
   //counting total per brands
   for (int i = 1; i < rows; i++)
   {
      for(int j=0;j<size_count && discovery ;j++)  
      {
         if((strcmp(data_count[j].name,data[i].name))==0)
         {
            data_count[j].value+=data[i].value;
            discovery=0;
         }     
      }

      if(discovery)
      { 
            strcpy(data_count[size_count].name,data[i].name);
            data_count[size_count].value=data[i].value;
            size_count++;
      }
         discovery=1;
   }

//print total per brands
   cout<<"Total per brands"<<endl;

   for(int j=0;j<size_count;j++)
   {
      cout<<data_count[j].name<<"\t"<<data_count[j].value<<endl;
   }

     fp.close();
}

//destructor
task::~task()
{  
}