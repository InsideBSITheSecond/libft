/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insidebsi <insidebsi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:19:57 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/09 14:24:38 by insidebsi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Copies [n] bytes from memory area [src] to memory area [dest]. 
 * The memory areas must not overlap.  Use ft_memmove if the memory 
 * areas do overlap.
 * @param  void *dst
 * @param  void *src
 * @param  size_t n
 * @retval void*
 */
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
