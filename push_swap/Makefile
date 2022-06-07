
PS_NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c check_error.c instructions.c utils.c utils2.c ex.c chunk.c sort.c stack.c rotate.c 

OBJS = $(SRCS:.c=.o)

%.o : %.c
	   $(CC) $(CFLAGS) $< -c

$(PS_NAME) : $(SRCS) 
		$(CC) $(CFLAGS) $(SRCS) -o ${PS_NAME} 

all : $(PS_NAME)

clean :
	rm -f ${OBJS}
fclean : clean
	rm -f push_swap

re : fclean all