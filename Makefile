##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Compiles C files
##

DIR_LIB		=	lib/

LIB_FILES	=	write.c		\
				get_len.c	\
				my_dup.c	\
				convert.c	\
				file_reader.c	\
				str_to_word_array.c

DIR_SRC		=	src/

SRC_FILES	=	main.c	\
				$(addprefix $(DIR_LIB), $(LIB_FILES))

SRC			=	$(addprefix $(DIR_SRC), $(SRC_FILES))

DIR_TEST	=	tests/

TEST_FILES	=	test.c	\
				lib.c	\

TESTS		=	$(addprefix $(DIR_TEST), $(TEST_FILES))

BINARY_TEST	=	test

TFLAGS		=	--coverage -lcriterion

TEST_SRC	=	$(addprefix src/, $(addprefix $(DIR_LIB), $(LIB_FILES)))

TEST_OBJ	=	$(TEST_SRC:.c=.o)

OBJ			=	$(SRC:.c=.o)

CFLAGS		=	-I./include -g -Wall -Wextra

BINARY		=	template

all: 	$(BINARY)

$(BINARY):	$(OBJ)
		@gcc $(OBJ) -o $(BINARY) $(CFLAGS)
		@echo "Makefile -> compile"

clean:
		@rm -f $(OBJ) $(TEST_OBJ)
		@rm -rf .ropeproject
		@echo "Makefile -> clean"

fclean: clean
		@rm -f $(BINARY)
		@rm -f $(BINARY_TEST)
		@rm -rf *.log
		@rm -rf *.gcov
		@rm -rf *.gcda
		@rm -rf *.gcno
		@rm -f vgcore.*
		@echo "Makefile -> fclean"

re:		fclean all
		@rm -rf .ropeproject
		@echo "Makefile -> re"

run:	re
		@echo "Makefile -> run"
		@echo ">-------------------<"
		@-./$(BINARY)
		@rm -f $(BINARY)
		@rm -f $(OBJ)
		@rm -rf *.log
		@rm -rf *.gcov
		@rm -rf *.gcda
		@rm -rf *.gcno
		@rm -f vgcore.*
		@echo ">-------------------<"

criterion: fclean $(TEST_OBJ)
		@gcc -o $(BINARY_TEST) $(TEST_OBJ) $(TESTS) $(CFLAGS) $(TFLAGS)
		@rm -f $(TEST_OBJ)
		@echo "Makefile -> criterion"

run_tests:	criterion
		@-./$(BINARY_TEST)
		@gcovr --exclude ./$(BINARY_TEST)
		@rm -f $(BINARY) $(BINARY_TEST)
		@rm -rf *.gcov
		@rm -rf *.gcda
		@rm -rf *.gcno
		@echo "Makefile -> run_tests"

.PHONY: all clean fclean re criterion run_tests run
