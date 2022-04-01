#include<library_Managment_system.h>

/**
 * @brief function to remove the records of a book
 * 
 * @param id 
 * @return test_values 
 */

test_values delete_book(int id)
{
    
    
    
    FILE *fp=NULL;
    FILE *ft=NULL;
    fp = fopen("book_Library.dat","rb");
    ft = fopen("temp.dat","wb");
    
    if(fp==NULL || ft==NULL)
        {
            printf("\nError: While opening file:\n");
            return fail;
        }
    else{
        rewind(fp);
        
        book *discarded_book = (book*)malloc(sizeof(book));
    while(fread(discarded_book,sizeof(book),1,fp)==1)
    {
        if(id != discarded_book->book_id)
        {
            
            fwrite(discarded_book,sizeof(book),1,ft);
            
            
        }
        
        
        

    }
    fclose(fp);
    fclose(ft);
    free(discarded_book);
  
   remove("book_Library.dat");
    rename("temp.dat","book_Library.dat");
    
    return pass;
    
    
        }

}