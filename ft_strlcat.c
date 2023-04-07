/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:37:35 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/07 19:39:51 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;
	l = ft_strlen(dst) + ft_strlen((char *)src);
	i = 0;

	if (ft_strlen(dst) >= dstsize)
		return (ft_strlen((char *)src) + dstsize);
	while(*dst)
		dst++;

	while((i < dstsize - (l - ft_strlen((char *)src)) - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (l);
}

int		main()
{
	char	*dest;
	size_t	s;

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);

	
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	memset(dest, 'r', 15);
	s=ft_strlcat(dest, "lorem ipsum dolor sit amet", 6);
	write(1, "\n", 1);
	write(1, dest, 15);
	return 0;
}
