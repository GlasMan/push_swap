NAME    = push_swap
CC = gcc
INC = push_swap.h
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRCS    = main.c\
		check_create.c	\
		push.c	\
		rotate.c	\
		sort.c	\
		swap.c	\
		utils.c	\
		utils2.c	\
		ft_atoi.c	\
		ft_split.c	\

OBJS = $(SRCS:.c=.o)
PRIN = ./ft_printf/libftprintf.a

Y = "\033[33m"
R = "\033[31m"
G = "\033[32m"
B = "\033[34m"
X = "\033[0m"
UP = "\033[A"
CUT = "\033[K"

all: $(NAME)

$(PRIN):
	@make -C ./ft_printf

$(NAME): $(OBJS) $(PRIN)
	@$(CC) ${CFLAGS} $(OBJS) -o $(NAME) $(PRIN)
	@echo $(B)push_swap is ready

%.o: %.c $(INC)
	@echo $(R)Complining [$<]
	@$(CC) -c $< -o $@ $(CFLAGS)

clean:
	@$(RM) $(OBJS)
	@make clean -C ft_printf/
	@echo $(R)Removed [$(OBJS)]

fclean: clean
	@$(RM) $(NAME)
	@make fclean -C ft_printf/
	@echo $(R)Removed [$(NAME)]

re: fclean all

.PHONY: all, clean, fclean, re
