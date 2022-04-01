#include"library_Managment_system.h"
#include"unity_internals.h"
#include"unity.h"

void setUp()
{

}

void tearDown()
{

}


void test_add_book(void)
{
    TEST_ASSERT_EQUAL(pass,add_book(125, "Ajay", "Dragon"));
}

void test_search_book(void)
{
    TEST_ASSERT_EQUAL(fail,search_book(-2));
    TEST_ASSERT_EQUAL(pass,search_book(125));
}

void test_issue_book(void)
{
    TEST_ASSERT_EQUAL(pass,issue_book(125));
}

void test_delete_book(void)
{
    TEST_ASSERT_EQUAL(pass,delete_book(125));
}        

void test_view_booklist(void)
{
    TEST_ASSERT_EQUAL(pass,test_view_booklist());
}



int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_add_book);
    RUN_TEST(test_search_book);
    RUN_TEST(test_issue_book);
    RUN_TEST(test_delete_book);
    RUN_TEST(test_view_booklist);
    
    return UNITY_END();
}