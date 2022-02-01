##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

SRC    =	$(wildcard *.c)

OBJ    =    $(SRC:.c=.o)

NAME	=   libmy.a

CFLAGS	= -Wall -Wextra -I./include/
LDFLAGS	= -lmy -L./lib/

all: 	include cph $(NAME) cpa clean

include:
	mkdir -p ../../include

cph:
	cp my.h ../../include

cpa:
	cp libmy.a ../

$(NAME): 	$(OBJ)
	 ar rc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: 	fclean all

supprinclud:
	rmdir include
