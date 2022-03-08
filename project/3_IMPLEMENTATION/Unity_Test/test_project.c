#include "unity.h"
#include "doorLock.h"
void setUp()
{
}
void tearDown()
{
}

void test_lock(void)
{
  TEST_ASSERT_EQUAL(1, lock());
}
void test_unlock(void)
{
   TEST_ASSERT_EQUAL(1, unlock());

}

int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_lock);
  RUN_TEST(test_unlock);
  return UNITY_END();
}
