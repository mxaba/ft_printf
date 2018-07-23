/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 08:28:23 by mxaba             #+#    #+#             */
/*   Updated: 2018/07/23 11:36:51 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include <errno.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

# define RESET			"\033[0m"
# define BLACK			"\033[30m"
# define RED			"\033[31m"
# define GREEN			"\033[32m"
# define YELLOW			"\033[33m"
# define BLUE			"\033[34m"
# define MAGENTA		"\033[35m"
# define CYAN			"\033[36m"
# define WHITE			"\033[37m"
# define BOLDBLACK		"\033[1m\003[30m"
# define BOLDRED		"\033[1m\033[31m"
# define BOLDGREEN		"\033[1m\033[32m"
# define BOLDYELLOW		"\033[1m\033[33m"
# define BOLDBLUE		"\033[1m\033[34m"
# define BOLDMAGENTA	"\033[1m\033[35m"
# define BOLDCYAN		"\033[1m\033[36m"
# define BOLDWHITE		"\033[1m\033[37m"

int		ft_printchar( va_list ap);
int		ft_printstr(va_list ap);
int		ft_printnbr(va_list ap);
int		ft_printunsigned(va_list ap);
int		ft_printhexa(va_list ap);
int		ft_printoctal(va_list ap);
int		ft_printvoid(va_list ap);
void	ft_fatal(char *binary);
char	*ft_htoa(unsigned long n);
char	*ft_otoa(unsigned int n);
char	*ft_utoa(unsigned int n);
int		ft_printchar_fd(int fd, va_list ap);
int		ft_printhexa_fd(int fd, va_list ap);
int		ft_printnbr_fd(int fd, va_list ap);
int		ft_printoctal_fd(int fd, va_list ap);
int		ft_printunsigned_fd(int fd, va_list ap);
int		ft_printvoid_fd(int fd, va_list ap);
int		ft_putint_fd(int fd, int c);
char	*ft_itoa(int n);
int		ft_printstr_fd(int fd, va_list ap);
int		ft_putchar(char c);
int		ft_printint(int c);
void    ft_quit(int system, char *e_perso);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int fd, int n);
void	ft_putstr(char const *str);
void	ft_putstr_fd(int fd, char const *str);
size_t	ft_strlen(const char *str);
int		ft_putchar_fd(int fd, char c);
int		ft_printf(const char *format, ...);
int		ft_printf_fd(int fd, const char *format, ...);

#endif
