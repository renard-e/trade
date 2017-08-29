##
## Makefile for  in /home/renard_e/2/ProgElem/trade
## 
## Made by Gregoire Renard
## Login   <renard_e@epitech.net>
## 
## Started on  Mon Jan 30 09:51:48 2017 Gregoire Renard
## Last update Thu Feb  2 19:40:58 2017 Gregoire Renard
##

CC	=	gcc -Iinclude/

RM	=	rm -fr

SRCS	=	src/main.c \
		src/buy.c \
		src/sell.c \
		src/wait.c \
		src/word_word.c \
		src/init_trade.c \
		src/trade_order.c \

OBJS	=	$(SRCS:.c=.o)

NAME	=	trade

CFLAGS	=	-Wall -Wextra -Werror -W

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all re clean fclean
