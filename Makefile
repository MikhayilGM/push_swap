CC = cc
CFLAGS = -Wall -Wextra -Werror #-I$(INC) #g3 -fsanitize=address

INC = push_swap.h

SRC = push_swap.c ft_substr.c ft_strlen.c ft_strjoin.c ft_split.c ft_memcpy.c ft_atoi.c validation.c stack.c swap.c push.c rotate.c reverse_rotate.c
OBJ = $(SRC:.c=.o)

BONUS_SRC = 
BONUS_OBJ = $(BONUS_SRC:.c=.o)

NAME = push_swap
BONUS = checker

.PHONY = NAME, all, clean, fclean, re, bonus

all: $(NAME)

bonus : $(BONUS)

$(NAME) : $(OBJ) Makefile push_swap.h
	$(CC) $(OBJ) -o $(NAME)

$(BONUS) : $(BONUS_OBJ) Makefile push_swap.h
	$(CC) $(CFLAGS) $(BONUS_OBJ) -o $@

%.o : %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
		rm -f $(OBJ) $(BONUS_OBJ)

fclean : clean
		rm -f $(NAME)
#		rm -f $(BONUS)

re : fclean all