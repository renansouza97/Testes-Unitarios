#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Sort_Sucesso);

TEST_SETUP(Sort_Sucesso)
{
}

TEST_TEAR_DOWN(Sort_Sucesso)
{
}
TEST(Sort_Sucesso, TestSort_Sucesso1)
{
  int length = 9;
  int a[9] = {5, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On";
  int algorithm = COUNTING;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}

TEST(Sort_Sucesso, TestSort_Sucesso2)
{
  int length = 9;
  int a[9] = {5, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On";
  int algorithm = RADIX;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}

TEST(Sort_Sucesso, TestSort_Sucesso3)
{
  int length = 9;
  int a[9] = {5, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On2";
  int algorithm = BUBBLE;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}

TEST(Sort_Sucesso, TestSort_Sucesso4)
{
  int length = 9;
  int a[9] = {5, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On2";
  int algorithm = INSERTION;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}

TEST(Sort_Sucesso, TestSort_Sucesso5)
{
  int length = 9;
  int a[9] = {5, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On2";
  int algorithm = SELECTION;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}

TEST(Sort_Sucesso, TestSort_Sucesso6)
{
  int length = 9;
  int a[9] = {5, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "Onlogn";
  int algorithm = HEAP;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}

TEST(Sort_Sucesso, TestSort_Sucesso7)
{
  int length = 9;
  int a[9] = {5, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "Onlogn";
  int algorithm = MERGE;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}

TEST(Sort_Sucesso, TestSort_Sucesso8)
{
  int length = 9;
  int a[9] = {5, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "Onlogn";
  int algorithm = QUICK;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}