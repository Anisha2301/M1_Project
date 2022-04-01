#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int add_book();
int delete_book();
int issue_book();
int view_booklist();
int search_book(); // it is header file, include all function
int main()
{
    
    int id,choice,success,pass,fail; 
    
    char name[20],authorname[20];
    
        

    printf("\n\t\t\t\t\t\t*************** MAIN MENU ***************\n");
    printf("\n\t\t\t\t\t\t1. Add Books");
    printf("\n\t\t\t\t\t\t2. Delete books");
    printf("\n\t\t\t\t\t\t3. View Books");
    printf("\n\t\t\t\t\t\t4. Search book");
    printf("\n\t\t\t\t\t\t5. Issue books");
    printf("\n\t\t\t\t\t\t6. Close Application");
    printf("\n\t\t\t\t\t\t******************************************\n");
    printf("\n\t\t\t\t\t\tEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("\nBookId: ");
        scanf("%d",&id);
        fflush(stdin);
        printf("\nBook name:");
        //gets(name);
	scanf("%19s",name);
       printf("Authorname: ");
        fflush(stdin);
        //gets(author);
	scanf("%19s",authorname);
        success=add_book(id,name,authorname);
        break;
        case 2:
        printf("\nBookId: ");
        scanf("%d",&id);
        success=delete_book(id);
        break;
        case 3:
        success=view_booklist();
        break;
        case 4:
        printf("\nBookId:");
        scanf("%d",&id);
        success=search_book(id);
        break;
        case 5:
        printf("\nBookId: ");
        scanf("%d",&id);
        success=issue_book(id);
        break;
        case 6:
        printf("\n\n\n");
        exit(1);
        default:
        printf("\n\t\t\t\t\t\tInvalid input");
        break;
     }
    if(success == pass)
    {
        printf("Successful\n");
    }
    else if(success==fail)
    {
        printf("Unsuccessful\n");
    }
    else{
        printf("Error\n");
    }
return 0;
}