/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strformat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:25:48 by llegrand          #+#    #+#             */
/*   Updated: 2023/08/08 12:25:48 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/get_next_line.h"
#include <stdio.h>

char *process_next_arg(char *str, va_list args)
{
	char	*type;
	char	*ret;

	type = ft_strchr("cspdiuxX%", (int)*(str + 1));
	if (type)
	{
		if (type[0] == 'c')
			ret = (char *)va_arg(args, int);
		else if (type[0] == 's')
			ret = va_arg(args, char *);
		else if (type[0] == 'i')
			ret = ft_itoa(va_arg(args, int));
	}
	return (ret);
}

char	*ft_strformat(const char *str, ...)
{
	va_list	args;
	int		i;
	int		j;
	char	*ret;

	va_start(args, str);
	i = 0;
	j = 0;
	ret = 0;
	while (str[i])
	{
		while (str[i] && str[i] != '%')
			i++;
 		if (!ret)
			ret = ft_substr(str, j, i);
		else
			ret = join_free(ret, ft_substr(str, j, i - j));
		if (str[i] && str[i] == '%')
		{
			ret = join_free(ret, process_next_arg((char *)str + i, args));
			i += 2;
		}
		j = i;
	}
	va_end(args);
	return (ret);
}

int main(int argc, char **argv)
{
	char *value = ft_strformat("hello %s %i im something in between %s %i", "senpai", 15684, "uwu", 1648);
	printf("%s", value);
	free(value);
}
