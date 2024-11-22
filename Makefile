##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Compiles C files
##


DIR_SRC		=	src

SRC_FILES	=	

SRC			=	$(addprefix $(DIR_SRC)/, $(SRC_FILES))

OBJ			=	$(SRC:.c=.o)

CFLAGS		=	-I include -g

BINARY		=	

NAME		=	libmy

$(NAME):	$(OBJ) all
		@ar rc $(NAME).a $(OBJ)
		@echo "Makefile -> libmy"

all: 	$(NAME)
		@gcc $(OBJ) -o $(BINARY) $(CFLAGS)
		@echo "Makefile -> gcc"

clean:
		@rm -f $(OBJ)
		@echo "Makefile -> clean"

fclean: clean
		@rm -rf $(BINARY)
		@rm -rf unit_tests
		@rm -rf *.log
		@rm -rf *.gcov
		@rm -rf *.gcda
		@rm -rf *.gcno
		@rm -f $(NAME).a
		@rm -f vgcore.*
		@echo "Makefile -> fclean"

re:		fclean all
		@echo "Makefile -> re"
