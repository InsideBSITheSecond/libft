/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:19:57 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/03 13:20:01 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dsti;
	size_t	srci;

	dsti = 0;
	srci = 0;
	if (!dst || !src)
		return (0);
	while (src[srci] != '\0')
		srci++;
	while (src[dsti] && dsti + 1 < dstsize)
	{
		dst[dsti] = src[dsti];
		dsti++;
	}
	if (dstsize)
		dst[dsti] = '\0';
	return (srci);
}
