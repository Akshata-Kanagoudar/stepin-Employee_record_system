#include "unity.h"
#include <record.h>

#define PROJECT_NAME    "Employee_record_system"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

FILE *fp;
void test_Clear_Screen(void){
  		TEST_ASSERT_EQUAL(0,Clear_Screen());
}
// void test_console_color(void){
//   		TEST_ASSERT_EQUAL(0,console_color(26));
// }
void test_create(void){
         fp=NULL;
  		TEST_ASSERT_EQUAL(0, create());
  		TEST_ASSERT_EQUAL(0, create());
}

void test_update(void){
  		TEST_ASSERT_EQUAL(0, update());
  		T
}

void test_dispaly(void)
{
    TEST_ASSERT_EQUAL(0,dispaly());
}

int  main()
{

    UNITY_BEGIN();

    RUN_TEST(test_create);
    //RUN_TEST(test_console_color);
    RUN_TEST(test_update);
    RUN_TEST(test_display);

    return UNITY_END();
}