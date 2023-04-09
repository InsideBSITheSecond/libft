/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insidebsi <insidebsi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:19:57 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/09 13:46:14 by insidebsi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Copies [n] bytes from memory area [src] to memory area [dest]
 * @param  void *dst
 * @param  void *src
 * @param  size_t n
 * @retval void*
 */
void	*ft_memmove(void *restrict dst, const void *restrict src, size_t n)
{

	if (src == dst || !n)
		return (dst);
	if (dst < src)
		ft_memcpy(dst, src, n);
	else
	{
		while (n > 0)
		{
			((unsigned char *)dst)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	return (dst);
}
