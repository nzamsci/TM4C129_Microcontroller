#include "unity.h"
#include <stdio.h>
#include <setjmp.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_always_pass(void) 
{
    TEST_ASSERT_EQUAL_INT(42, 42);
}

void runTest(UnityTestFunction test)
{
    if (TEST_PROTECT()) {
        test();
    }
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_always_pass);
    UNITY_END();
    return 0;
}
