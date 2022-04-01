/**
 * @file library_Managment_system.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __LIBRARY_MANAGEMENT_SYSTEM_H__
#define __LIBRARY_MANAGEMENT_SYSTEM_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/**
 * @brief structure for Book Record
 * 
 */
typedef struct library
{
    int book_id;
    char book_name[20];
    char author_name[20];
}book;

/**
 * @brief return type for funtions for unit testing
 * 
 */

typedef enum test_values {
    pass = 1,
    fail = 0
}test_values;

/**
 * @brief function to find a book by its ID
 * @param id 
 * @return test_values 
 */

test_values add_book(int id,char name[],char author[]);

/**
 * @brief funtion to denote discarded books
 * 
 * @param id 
 * @return test_values 
 */
test_values delete_book(int id);

/**
 * @brief function to view all the books
 * 
 * @return test_values 
 */
test_values search_book(int id);

/**
 * @brief function to add new books to the library
 * 
 * @return test_values 
 */
test_values issue_book(int id);

/**
 * @brief function to issue the books
 * 
 * @return test_values 
 */
test_values view_booklist(void);

#endif