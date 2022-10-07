#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Sort);

TEST_SETUP(Sort)
{
}

TEST_TEAR_DOWN(Sort)
{
}

TEST(Sort, TesteSucesso_Couting)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On";
  int algorithm = COUNTING;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}

TEST(Sort, TesteSucesso_Radix)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On";
  int algorithm = RADIX;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}

TEST(Sort, TesteSucesso_Bubble)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On2";
  int algorithm = BUBBLE;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}

TEST(Sort, TesteSucesso_Insertion)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 0};
  char *type = "On2";
  int algorithm = INSERTION;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}

TEST(Sort, TesteSucesso_Selection)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On2";
  int algorithm = SELECTION;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}

TEST(Sort, TesteSucesso_Heap)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "Onlogn";
  int algorithm = HEAP;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}

TEST(Sort, TesteSucesso_Merge)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "Onlogn";
  int algorithm = MERGE;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}

TEST(Sort, TesteSucesso_Quick)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "Onlogn";
  int algorithm = QUICK;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}

TEST(Sort, TesteVetor_TamanhoMinimo)
{
  int length = 2;
  int a[] = {2, 1};
  char *type = "On";
  int algorithm = COUNTING;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}

TEST(Sort, TesteVetor_TamanhoMaximo)
{
  int length = 20;
  int a[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  char *type = "On";
  int algorithm = COUNTING;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}

TEST(Sort, TesteVetor_TamanhoMinimoInvalido)
{
  int length = 1;
  int a[] = {50};
  char *type = "On";
  int algorithm = COUNTING;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteVetor_TamanhoMaximoInvalido)
{
  int length = 21;
  int a[] = {21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  char *type = "On";
  int algorithm = COUNTING;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteVetor_TamanhoNulo)
{
  int length = NULL;
  char a[] = {15, 8, 9, 6, 3};
  char *type = "On";
  int algorithm = COUNTING;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteVetor_ValoresRepetidos)
{
  int length = 5;
  int a[] = {1, 1, 1, 1, 1};
  char *type = "On";
  int algorithm = COUNTING;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}

TEST(Sort, TesteVetor_ValoresNegativos)
{
  int length = 5;
  int a[] = {-1, -2, -3, -4, -5};
  char *type = "On";
  int algorithm = RADIX;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}

TEST(Sort, TesteVetor_ValoresNegativosEPositivos)
{
  int length = 5;
  int a[] = {2, -1, 0, 1, -2};
  char *type = "On";
  int algorithm = COUNTING;

  TEST_ASSERT_EQUAL(0, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_OnBubble)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On";
  int algorithm = BUBBLE;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_OnInsertion)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On";
  int algorithm = INSERTION;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_OnSelection)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On";
  int algorithm = SELECTION;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_OnHeap)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On";
  int algorithm = HEAP;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_OnMerge)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On";
  int algorithm = MERGE;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_OnQuick)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On";
  int algorithm = QUICK;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_On2Counting)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On2";
  int algorithm = COUNTING;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_On2Radix)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On2";
  int algorithm = RADIX;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_On2Heap)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On2";
  int algorithm = HEAP;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_On2Merge)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On2";
  int algorithm = MERGE;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_On2Quick)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On2";
  int algorithm = QUICK;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_OnlognCounting)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "Onlogn";
  int algorithm = COUNTING;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_OnlognRadix)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "Onlogn";
  int algorithm = RADIX;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_OnlognBubble)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "Onlogn";
  int algorithm = BUBBLE;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_OnlognInsertion)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "Onlogn";
  int algorithm = INSERTION;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_OnlognSelection)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "Onlogn";
  int algorithm = SELECTION;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_CountingInvalida)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "on";
  int algorithm = COUNTING;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_RadixInvalida)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "on";
  int algorithm = RADIX;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_BubbleInvalida)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "on2";
  int algorithm = BUBBLE;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_InsertionInvalida)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "on2";
  int algorithm = INSERTION;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_SelectionInvalida)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "on2";
  int algorithm = SELECTION;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_HeapInvalida)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "onlogn";
  int algorithm = HEAP;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_MergeInvalida)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "onlogn";
  int algorithm = MERGE;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteComplexidade_QuickInvalida)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "onlogn";
  int algorithm = QUICK;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteAlgoritmo_OnInvalido)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On";
  int algorithm = 50;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteAlgoritmo_On2Invalido)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "On2";
  int algorithm = 50;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}

TEST(Sort, TesteAlgoritmo_OnlognInvalido)
{
  int length = 9;
  int a[] = {15, 8, 9, 6, 3, 2, 1, 4, 7};
  char *type = "Onlogn";
  int algorithm = 50;

  TEST_ASSERT_EQUAL(1, sort(a, length, type, algorithm));
}