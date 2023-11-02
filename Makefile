# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 14:22:16 by llegrand          #+#    #+#              #
#    Updated: 2023/11/02 17:09:26 by llegrand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := cc
CCARGS := -Wall -Werror -Wextra -I ./includes -c -g3

AR := ar
ARARGS := -crs

CL			= srcs/linked_lists/
SRCS_CL 	= $(CL)ft_lstnew.c $(CL)ft_lstdelone.c $(CL)ft_lstadd_front.c $(CL)ft_lstsize.c $(CL)ft_lstlast.c $(CL)ft_lstadd_back.c $(CL)ft_lstclear.c $(CL)ft_lstiter.c $(CL)ft_lstmap.c

CMP			= srcs/compare/
SRCS_CMP	= $(CMP)ft_isalnum.c $(CMP)ft_isalpha.c $(CMP)ft_isascii.c $(CMP)ft_isdigit.c $(CMP)ft_isprint.c

CNV			= srcs/convert/
SRCS_CNV 	= $(CNV)ft_atol.c $(CNV)ft_dtoa.c $(CNV)ft_atoi.c $(CNV)ft_itoa.c $(CNV)ft_toupper.c $(CNV)ft_tolower.c $(CNV)ft_putnbr_base.c

FD			= srcs/fd/
SRCS_FD		= $(FD)ft_putchar_fd.c $(FD)ft_putstr_fd.c $(FD)ft_putendl_fd.c $(FD)ft_putnbr_fd.c

MEM			= srcs/memory/
SRCS_MEM 	= $(MEM)ft_memset.c $(MEM)ft_bzero.c $(MEM)ft_memcpy.c $(MEM)ft_memmove.c $(MEM)ft_memchr.c $(MEM)ft_memcmp.c $(MEM)ft_calloc.c

STR			= srcs/strings/
SRCS_STR 	= $(STR)ft_strcontains.c $(STR)ft_strcmp.c $(STR)ft_strcat.c $(STR)ft_strlcpy.c $(STR)ft_strlcat.c $(STR)ft_strlen.c $(STR)ft_strchr.c $(STR)ft_strrchr.c $(STR)ft_strncmp.c $(STR)ft_strnstr.c $(STR)ft_strmapi.c $(STR)ft_substr.c $(STR)ft_strjoin.c $(STR)ft_strtrim.c $(STR)ft_strdup.c $(STR)ft_split.c $(STR)ft_striteri.c

PF			= srcs/printf/
SRCS_PF		= $(PF)ft_printf.c $(PF)ft_puthex.c $(PF)ft_putnbr.c $(PF)ft_putptr.c $(PF)ft_putstr.c

GNL			= srcs/get_next_line/
SRCS_GNL	= $(GNL)get_next_line_utils.c $(GNL)get_next_line.c

SFORM		= srcs/strformat/
SRCS_SFORM	= $(SFORM)strformat.c

CDLLIST		= srcs/cdl_lists/
SRCS_CDLL	= $(CDLLIST)ft_cdlladd.c $(CDLLIST)ft_cdlliter.c $(CDLLIST)ft_cdllnew.c $(CDLLIST)ft_cdllfind.c $(CDLLIST)ft_cdllsize.c $(CDLLIST)ft_cdlldrop.c $(CDLLIST)ft_cdlldelone.c $(CDLLIST)ft_cdllswap.c

MATH		= srcs/math/
SRCS_MATH	= $(MATH)ft_clamp.c $(MATH)ft_vector_basic.c $(MATH)ft_vector_advanced.c

LINMAP		= srcs/linmap/
SRCS_LINMAP = $(LINMAP)ft_linmap.c $(LINMAP)ft_mlinmap.c

COLORS		= srcs/colors/
SRCS_COLORS	= $(COLORS)ft_colors.c

SRCS = $(SRCS_CMP) $(SRCS_CL) $(SRCS_CNV) $(SRCS_FD) $(SRCS_MEM) $(SRCS_STR) $(SRCS_PF) $(SRCS_SFORM) $(SRCS_CDLL) $(SRCS_GNL) $(SRCS_MATH) $(SRCS_LINMAP) $(SRCS_COLORS)

OBJS=$(addprefix build/, $(notdir $(SRCS:.c=.o)))

NAME := libft.a

$(NAME) : $(OBJS)
	$(AR) $(ARARGS) $(NAME) $(OBJS)

build/ :
	mkdir build

build/%.o : srcs/*/%.c | build
	$(CC) $(CCARGS) $< -o $(addprefix build/, $(notdir $(<:.c=.o)))

clean :
	rm -f $(OBJS) debug.out a.out

fclean : clean
	rm -f $(NAME)
	rm -rf build

all : $(NAME)

re :	fclean all

bonus : $(OBJS) $(BOBJS)
	$(AR) $(ARARGS) $(NAME) $(OBJS) $(BOBJS)

show :
	reset
	@echo $(SRCS)
	@echo -_-_-_-_-_-_-_-_-_-_-
	@echo $(OBJS)
	@echo -_-_-_-_-_-_-_-_-_-_-
	@echo $(BONUS)
	@echo -_-_-_-_-_-_-_-_-_-_-
	@echo $(BOBJS)
	@echo -_-_-_-_-_-_-_-_-_-_-
	@echo $(CC) $(CCARGS) -I./ -o $(<:.c=.o)
	@echo -_-_-_-_-_-_-_-_-_-_-
	@echo $(AR) $(ARARGS) $(NAME) $(OBJS)

test :
	gcc ${SRCS} -g -o a.out
	./a.out ${arg}

.PHONY : clean fclean all re build/
