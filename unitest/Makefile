##
## EPITECH PROJECT, 2021
## make file
## File description:
## makefile
##

DEFAULT     =   "\033[00m"
RED         =   "\033[31m"
GREEN       =   "\033[1;32m"
TEAL        =   "\033[1;36m"
YELLOW      =   "\033[1;7;25;33m"
MAGENTA     =   "\033[1;3;4;35m"
ERROR       =   "\033[5;7;1;31m"
BLINK       =   "\033[5m"
END         =   "\n"

CC = gcc

TESTS	=	$(shell find lib_fonction/*.c src/*.c tests/*.c)	\

SRC	=	$(shell find src/*.c lib_fonction/*.c)	\
		$(shell find *.c)

INC	=	-I ./include

UNITFLAGS	=	-lcriterion --coverage

CFLAGS  	=   -g3 -lncurses

EXECTESTS	=	unit_tests

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

all:	$(NAME)

tests_run:	$(OBJ)
	@$(CC) -o $(EXECTESTS) $(TESTS) $(INC) $(UNITFLAGS)
	./$(EXECTESTS)

%.o:    %.c
	@$(CC)  $(CFLAGS) -c $< -o $@ && \
	printf "["$(GREEN)"OK"$(DEFAULT)"] "$(TEAL)$<$(DEFAULT)" -----> "$(GREEN)$@$(DEFAULT)$(END) || \
	printf "["$(RED)"KO"$(DEFAULT)"] "$(BLINK)$(YELLOW)$^$(DEFAULT)$(END) 1>&2

all:    $(NAME)
	@printf "["$(GREEN)"INFO"$(DEFAULT)"] Compiler: $(CC)"$(END)

$(NAME):
	@$(CC) -o $(NAME) $(SRC) $(CFLAGS)
	@printf "["$(GREEN)"OK"$(DEFAULT)"]"$(TEAL)" Done : "$(GREEN)$@$(DEFAULT)$(END) || \
	printf "["$(RED)"KO"$(DEFAULT)"]"$(BLINK)$(YELLOW)$(NAME)$(DEFAULT)$(END) 1>&2

clean:
	@rm -f $(OBJ)
	@printf "["$(RED)"DEL"$(DEFAULT)"] $(OBJ)"$(END)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(EXECTESTS)
	@rm -rf *.gcno
	@rm -rf *.gcda
	@rm -rf *~
	@rm -rf include/*~ src/*~
	@printf "["$(RED)"DEL"$(DEFAULT)"] $(NAME)"$(END)

re:     fclean all
