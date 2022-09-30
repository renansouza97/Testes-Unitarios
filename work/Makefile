# ==========================================
#   Trabalho 1 - Teste e Confiabilidade de Sistemas
#   Desenvolvido por:
#		Alan Felipe Oliveira
#   	Augusto Gabriel de Lara
#		Renan de Souza Silva
# ==========================================

#We try to detect the OS we are running on, and adjust commands as needed
ifeq ($(OS),Windows_NT)
  ifeq ($(shell uname -s),) # not in a bash-like shell
	CLEANUP = del /F /Q
	MKDIR = mkdir
  else # in a bash-like shell, like msys
	CLEANUP = rm -f
	MKDIR = mkdir -p
  endif
	TARGET_EXTENSION=.exe
else
	CLEANUP = rm -f
	MKDIR = mkdir -p
	TARGET_EXTENSION = .out
endif

C_COMPILER=gcc
CLANG_COMPILER=clang
CPPCHECK=cppcheck
VALGRIND=valgrind
GCOV=gcov

UNITY_ROOT=../Unity

CFLAGS=-std=c99
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Wpointer-arith
CFLAGS += -Wcast-align
CFLAGS += -Wwrite-strings
CFLAGS += -Wswitch-default
CFLAGS += -Wunreachable-code
CFLAGS += -Winit-self
CFLAGS += -Wmissing-field-initializers
CFLAGS += -Wno-unknown-pragmas
CFLAGS += -Wstrict-prototypes
CFLAGS += -Wundef
CFLAGS += -Wold-style-definition
CFLAGS += -fprofile-arcs
CFLAGS += -ftest-coverage

TARGET_BASE1=all_tests
TARGET1 = $(TARGET_BASE1)$(TARGET_EXTENSION)

SRC_FILES1=\
  	$(UNITY_ROOT)/src/unity.c \
  	$(UNITY_ROOT)/extras/fixture/src/unity_fixture.c \
	test/TestSortSucesso.c \
	test/test_runners/TestSort_Runner.c \
	test/test_runners/all_tests.c \

SRC_FILES2=\
	src/quick_sort.c \
	src/merge_sort.c \
	src/heap_sort.c \
	src/selection_sort.c \
	src/insertion_sort.c \
	src/bubble_sort.c \
	src/radix_sort.c \
	src/counting_sort.c \
	src/sort.c \


SRC_FILES3=\
	quick_sort \
	merge_sort \
	heap_sort \
	selection_sort \
	insertion_sort \
	bubble_sort \
	radix_sort \
	counting_sort \
	sort

INC_DIRS=-Isrc -I$(UNITY_ROOT)/src -I$(UNITY_ROOT)/extras/fixture/src

all: clean compile run

compile:
	$(C_COMPILER) $(CFLAGS) $(INC_DIRS) $(SRC_FILES1) $(SRC_FILES2) -o $(TARGET1)

cppcheck:
	$(CPPCHECK) --enable=all --suppress=missingIncludeSystem $(INC_DIRS) $(SRC_FILES1) $(SRC_FILES2)

valgrind:
	$(C_COMPILER) -Wall -Wfatal-errors $(INC_DIRS) $(SRC_FILES1) $(SRC_FILES2) -o $(TARGET1)
	$(VALGRIND) --leak-check=full --show-leak-kinds=all ./$(TARGET1) -v

sanitizer:
	$(CLANG_COMPILER) -Wall -Wfatal-errors -fsanitize=address $(INC_DIRS) $(SRC_FILES1) $(SRC_FILES2) -o $(TARGET1)
	./$(TARGET1) -v

gcov: compile run
	gcov -b $(SRC_FILES3)

run:
	./$(TARGET1) -v

clean:
	$(CLEANUP) *.out *.gc*
