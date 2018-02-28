#include <string.h> 
 
struct books
{ 
           int id; 
           char name[20]; 
           int pages; 
}; 
 
int main() 
{ 
           struct books record = {0}; //Initializing to null 
 
           record.id=1001; 
           strcpy(record.name,"bs grewal"); 
           record.pages = 500; 
 
           printf(" Id is: %d \n", record.id); 
           printf(" Name is: %s \n", record.name); 
           printf(" No. of  pages is: %d \n", record.pages);
           
}
