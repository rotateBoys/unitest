##
## EPITECH PROJECT, 2019
## make file
## File description:
## make file
##

SRC	=	$(shell find ./src -name '*.c')

OBJ	=	$(SRC:.c=.o)

INC	=	-Iinclude

NAME	=	my_defender

FREE	=	-l csfml-audio -l csfml-graphics -l csfml-system -l csfml-window

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(INC) $(SRC) $(FREE) -g
clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -rf *~
	rm -rf include/*~ src/*~

re:	fclean all
