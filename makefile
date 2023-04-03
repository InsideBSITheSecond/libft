CC := cc
CCARGS := -g -Wall -Werror -Wextra -g3 -fsanitize=address

AR := ar
ARARGS := -crs

SRCS := $(shell find . -name '*.c')
OBJS := $(SRCS:.c=.o)

NAME := libft.a

${NAME}:
	$(CC) $(CCARGS) -c $(SRCS) -I./
	$(AR) $(ARARGS) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

all: $(NAME)

re:	fclean all

print:
	echo $(SRCS)
	echo $(OBJS)