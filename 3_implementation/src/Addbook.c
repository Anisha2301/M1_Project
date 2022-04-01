#include<library_Managment_system.h>

/**
 * @brief function to add new books to library
 * 
 * @return test_values 
 */

test_values add_book(int id,char name[],char author[])
{
    
    
    
    FILE *fp=NULL;
    fp=fopen("bookLibrary.dat","ab+");
    
    if(fp == NULL)
    {
        printf("\nError: while opening file\n");
        return fail;
    }
    else{
        
        book *new_Book = NULL;
        new_Book = malloc(sizeof(book));
		
        new_Book->book_id = id;
        strcpy(new_Book->book_name,name);
        
    

    strcpy(new_Book->author_name,author);
    
    fwrite(new_Book,sizeof(book),1,fp);
    fclose(fp);
    free(new_Book);
    
    
    return pass;
    }

}