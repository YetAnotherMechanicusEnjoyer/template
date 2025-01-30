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
				str_to_word_array.c

DIR_SRC		=	src/

SRC_FILES	=	main.c	\
				$(addprefix $(DIR_LIB), $(LIB_FILES))

SRC			=	$(addprefix $(DIR_SRC), $(SRC_FILES))

OBJ			=	$(SRC:.c=.o)

CFLAGS		=	-I./include -g

BINARY		=	template

all: 	compile clean
		@echo "Makefile -> all"

compile:	$(OBJ)
		@gcc $(OBJ) -o $(BINARY) $(CFLAGS)
		@echo "Makefile -> compile"

clean:
		@rm -f $(OBJ)
		@rm -rf .ropeproject
		@echo "Makefile -> clean"

fclean: clean
		@rm -rf $(BINARY)
		@rm -rf unit_tests
		@rm -rf *.log
		@rm -rf *.gcov
		@rm -rf *.gcda
		@rm -rf *.gcno
		@rm -f vgcore.*
		@echo "Makefile -> fclean"

re:		fclean all
		@rm -f $(OBJ)
		@rm -rf .ropeproject
		@echo "Makefile -> re"

.PHONY: all clean fclean re compile
