# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mxaba <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/19 14:24:07 by mxaba             #+#    #+#              #
#    Updated: 2018/07/23 11:36:16 by mxaba            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	printf.a

CLANG	=	gcc

CFLAGS	=	-Wall -Wextra -Werror

SRC		=	ft_fatal.c ft_htoa.c ft_itoa.c ft_otoa.c ft_printchar.c ft_printchar_fd.c \
			ft_printf.c ft_printf_fd.c ft_printhexa.c ft_printhexa_fd.c ft_printnbr.c \
			ft_printnbr_fd.c ft_printoctal.c ft_printoctal_fd.c ft_printstr.c ft_printstr_fd.c \
			ft_printunsigned.c ft_printunsigned_fd.c ft_printvoid.c ft_printvoid_fd.c \
			ft_putchar.c ft_putchar_fd.c ft_putint.c ft_putint_fd.c ft_putnbr.c ft_putnbr_fd.c \
			ft_putstr.c ft_putstr_fd.c ft_strlen.c ft_utoa.c ft_quit.c

OBJ		=	ft_fatal.o ft_htoa.o ft_itoa.o ft_otoa.o ft_printchar.o ft_pirntchar_fd.o \
			ft_printf.o ft_printf_fd.o ft_printhexa.o ft_printhexa_fd.o ft_printnbr.o \
			ft_printnbr_fd.o ft_printoctal.o ft_printoctal_fd.o ft_printstr.o ft_printstr_fd.o \
			ft_printunsigned.o ft_printunsigned_fd.o ft_printvoid.o ft_printvoid_fd.o \
			ft_putchar.o ft_putchar_fd.o ft_putint.o ft_putint_fd.o ft_putnbr.o ft_putnbr_fd.o \
			ft_putstr.o ft_putstr_fd.o ft_strlen.o ft_utoa.o ft_quit.o

all		:	 $(NAME)

$(NAME)	:	$(OBJ)
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME)

$(OBJ)	:	$(SRC)
			$(CLANG) $(CFLAGS) $(SRC)

clean	:
			rm -rf $(OBJ)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all
