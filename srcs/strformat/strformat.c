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

typedef struct s_container
{
	int		i;
	int		j;
	char	*ret;
}				t_container;

char	*join_free2(char *memory, char *new_content)
{
	char	*tmp;

	tmp = ft_strjoin(memory, new_content);
	free(memory);
	//free(new_content); was only used for passing allocated shit from fractol
	return (tmp);
}

char	*process_next_arg(char *str, va_list args)
{
	char	*type;
	char	*ret;

	type = ft_strchr("cspdiuxX%", (int)*(str + 1));
	if (type)
	{
		if (type[0] == 's')
			ret = va_arg(args, char *);
		else if (type[0] == 'i')
			ret = ft_itoa(va_arg(args, int));
		else if (type[0] == 'd')
			ret = ft_dtoa(va_arg(args, double), 16);
		else
			ret = "(error)";
		return (ret);
	}
	else
		return (0);
}

char	*ft_strformat(const char *str, ...)
{
	va_list		args;
	t_container	data;

	data = (t_container){.i = 0, .j = 0, .ret = 0};
	va_start(args, str);
	while (str[data.i])
	{
		while (str[data.i] && str[data.i] != '%')
			data.i++;
		if (!data.ret)
			data.ret = ft_substr(str, data.j, data.i);
		else
			data.ret = join_free2(data.ret,
					ft_substr(str, data.j, data.i - data.j));
		if (str[data.i] && str[data.i] == '%')
		{
			data.ret = join_free2(data.ret,
					process_next_arg((char *)str + data.i, args));
			data.i += 2;
		}
		data.j = data.i;
	}
	va_end(args);
	return (data.ret);
}
