/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:19:57 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/03 13:20:01 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	if (src == dst || !n)
		return (dst);

	i = 0;
	if (dst > src)
		ft_memcpy(dst, src, n);
	else if (dst < src)
	{
		while (n > 0)
		{
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
			n--;
		}
	}
	return (dst);
}