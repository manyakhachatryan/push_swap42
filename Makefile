NAME 	= push_swap
NAME_BONUS	= checker
CC 	= cc
CFLAGS 	= -Wall -Wextra -Werror 

SRCS 	= $(wildcard src/*.c)
SRCS_BONUS	= $(wildcard src_bonus/*.c)
		

all: $(NAME) $(NAME_BONUS)

OBJS	= $(SRCS:.c=.o)
OBJS_BONUS	= $(SRCS_BONUS:.c=.o)

$(NAME) : $(OBJS) 
	@$(CC)   $^ -o $@
		
$(NAME_BONUS) : $(OBJS_BONUS)
	@$(CC)   $^ -o $@
clean: 
	@rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	@rm -f $(NAME) $(NAME_BONUS) 

re: fclean all