##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Compiles C files
##

CC			=	gcc

DIR_LIB		=	lib/

LIB_FILES	=	write.c		\
				get_len.c	\
				my_cat.c	\
				my_cmp.c	\
				my_cpy.c	\
				my_dup.c	\
				convert.c	\
				swap.c		\
				file_reader.c	\
				str_to_word_array.c

DIR_TMP		=	template/

TMP_FILES	=	init.c	\

DIR_SRC		=	src/

SRC_FILES	=	main.c	\
				$(addprefix $(DIR_LIB), $(LIB_FILES))	\
				$(addprefix $(DIR_TMP), $(TMP_FILES))

SRC			=	$(addprefix $(DIR_SRC), $(SRC_FILES))

DIR_TEST	=	tests/

TEST_FILES	=	test.c	\
				lib.c	\

TESTS		=	$(addprefix $(DIR_TEST), $(TEST_FILES))

BINARY_TEST	=	test

DIR_OBJ		=	.obj/

OBJ			=	$(SRC:%.c=$(DIR_OBJ)%.o)

TEST_OBJ	=	$(filter-out $(DIR_OBJ)/src/main.o, $(OBJ))

CFLAGS		=	-I./include

DFLAGS		=	-g -Wall -Wextra

TFLAGS		=	--coverage -lcriterion

BINARY		=	a.out

all: 	$(BINARY)

$(BINARY):	$(OBJ)
		@$(CC) $^ -o $@ $(CFLAGS) $(DFLAGS)
		@echo -e "\x1b[36mMakefile -> compile\x1b[0m"

$(DIR_OBJ)%.o:	%.c
		@mkdir -p $(dir $@)
		@$(CC) $^ -c -o $@ $(CFLAGS) $(DFLAGS)
		@echo -e "\x1b[36mMakefile -> $@\x1b[0m"

clean:
		@rm -rf $(DIR_OBJ)
		@rm -rf .ropeproject
		@rm -rf .cache
		@echo -e "\x1b[35mMakefile -> clean\x1b[0m"

fclean: clean
		@rm -f $(BINARY)
		@rm -f $(BINARY_TEST)
		@rm -f *.log
		@rm -f *.gcov
		@rm -f *.gcda
		@rm -f *.gcno
		@rm -rf .cache
		@rm -f vgcore.*
		@rm -rf $(DIR_OBJ)
		@echo -e "\x1b[35mMakefile -> fclean\x1b[34m"

re:		fclean all
		@rm -rf .ropeproject
		@rm -rf $(DIR_OBJ)
		@echo -e "\x1b[31mMakefile -> re\x1b[0m"

run:	re
		@echo -e "\x1b[33mMakefile -> run\x1b[0m"
		@echo -e "\x1b[32m>-------------------<\x1b[35m"
		@-./$(BINARY) --help
		@echo -e "\x1b[36m+-----------+\x1b[0m"
		@-./$(BINARY)
		@rm -f $(BINARY)
		@rm -f $(OBJ)
		@rm -f *.log
		@rm -f *.gcov
		@rm -f *.gcda
		@rm -f *.gcno
		@rm -f vgcore.*
		@rm -rf $(DIR_OBJ)
		@echo -e "\x1b[32m>-------------------<\x1b[0m"

criterion: fclean $(TEST_OBJ)
		@$(CC) -o $(BINARY_TEST) $(TESTS) $(TEST_OBJ) $(CFLAGS) $(TFLAGS)
		@echo -e "\x1b[36mMakefile -> criterion\x1b[0m"

run_tests:	criterion
		@-./$(BINARY_TEST)
		@gcovr -i ./$(BINARY_TEST)
		@rm -f $(BINARY) $(BINARY_TEST)
		@rm -f *.log
		@rm -f *.gcov
		@rm -f *.gcda
		@rm -f *.gcno
		@rm -rf $(DIR_OBJ)
		@echo -e "\x1b[34mMakefile -> run_tests\x1b[0m"

.PHONY: all clean fclean re criterion run_tests run
