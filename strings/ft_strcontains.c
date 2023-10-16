/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcontains.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:54:45 by llegrand          #+#    #+#             */
/*   Updated: 2023/10/10 16:54:45 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int ft_strcontsowpref(char *str, char *chars, char prefix)
{
	if (!str || !chars || !prefix)
		return (-1);
	if (str[0] != prefix && ft_strchr(chars, str[0]))
		return (ft_strcontsonly(str, chars));
	if (str[0] == prefix)
		return (ft_strcontsonly(++str, chars));
	return (0);
}

int	ft_strcontsonly(char *str, char *chars)
{
	int	i;

	i = 0;
	while (i < (int)ft_strlen(str))
	{

		if (!ft_strchr(chars, str[i]))
			return (0);
		i++;
	}
	return (1);
}
