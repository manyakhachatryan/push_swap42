NAME 	= push_swap
CC 	= cc
CFLAGS 	= -Wall -Wextra -Werror 

SRCS 	= $(wildcard src/*.c)
		



all: $(NAME)

OBJS	= $(SRCS:.c=.o)

$(NAME) : $(OBJS) 
	@$(CC)   $^ -o $@
		
clean: 
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all