/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabouzid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 22:51:44 by oabouzid          #+#    #+#             */
/*   Updated: 2020/01/28 21:33:52 by oabouzid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define ZERO    0b00000001
# define MIN     0b00000010
# define POINT   0b00000100

typedef struct	s_flag
{
	int		preci;
	int		widh;
	char	spf;
	char	flags;
}				t_flag;

size_t		g_ret;
t_flag		g_info;
int			g_zero;

size_t			ft_strlen(const char *s);
int				ft_isdigit(int c);
int				ft_atoi(const char *str);
int				ft_printf(char *s, ...);
void			ft_collectflags(char *str, va_list s, size_t *index);
char			*ft_strchr(const char *s, int c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strdup(const char *s1);
char			*ft_itoa_base(unsigned long int value, int base);
char			*ft_strjoin(char *s1, char *s2, int a);
void			ft_put(char *str, char sign);
void			ft_putstr(char *s);
void			ft_putchar(char c);
void			ft_printd(va_list pa);
void			ft_printc(va_list pa);
void			ft_printx(va_list pa);
void			ft_prints(va_list pa);
void			ft_printperc(void);
void			ft_printp(va_list pa);
void			ft_printu(va_list pa);

#endif
