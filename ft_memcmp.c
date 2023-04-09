/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insidebsi <insidebsi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:44:31 by insidebsi         #+#    #+#             */
/*   Updated: 2023/04/09 14:25:38 by insidebsi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Compares the first [n] bytes (each interpreted as unsigned char)
 * of the memory areas [s1] and [s2]
 * @param  void *s1
 * @param  void *s2
 * @param  size_t n
 * @retval int
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}

// int main()
//  {
//   ft_memcmp("t\200", "t\0", 2);
//   ft_memcmp("testss", "test", 5);
//   ft_memcmp("", "test", 4);
// 	ft_memcmp("test", "", 4);
//  }