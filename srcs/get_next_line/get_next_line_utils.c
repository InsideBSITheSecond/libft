/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:33:21 by llegrand          #+#    #+#             */
/*   Updated: 2023/05/11 15:33:21 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin_gnl(char const *s1, char const *s2)
{
	int		sizetotal;
	char	*res;
	int		i;
	int		j;

	i = 0;
	sizetotal = ft_strlen_gnl(s1) + ft_strlen_gnl(s2);
	res = malloc(sizeof(char) * (sizetotal + 1));
	if (!res || !s1 || !s2)
		return (NULL);
	while (s1[i] != 0)
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != 0)
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[sizetotal] = 0;
	return (res);
}

/** 
 * @brief  Allocates memory for an array of [nmemb] elements 
 * of [size] bytes each and returns a pointer to the allocated memory
 * @param  size_t nmemb
 * @param  size_t size
 * @retval void*
 */
void	*ft_calloc_gnl(size_t nmemb, size_t size)
{
	void	*p;

	p = (void *)malloc(nmemb * size);
	if (!p)
		return (0);
	ft_bzero_gnl(p, nmemb * size);
	return (p);
}

/** 
 * @brief  Calculates the length of the string pointed 
 * to by [str], excluding the terminator.
 * @param  char *str
 * @retval size_t
 */
size_t	ft_strlen_gnl(const char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i] && str[i] != '\0')
		i++;
	return (i);
}

/** 
 * @brief  Zero data in n bytes of memory starting at the location pointed by s
 * @param  void *s
 * @param  size_t n
 */
void	ft_bzero_gnl(void *s, size_t n)
{
	size_t	i;

	if (!s || !n)
		return ;
	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

/** 
 * @brief  Scan the string [s] for the first occurence of [c]
 * @param  char *s
 * @param  int *c
 * @retval char*
 */
char	*ft_strchr_gnl(const char *s, int c)
{
	char	*ptr;

	if (!s)
		return (0);
	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == (char)c)
			return (ptr);
		ptr++;
	}
	if (*ptr == (char)c)
		return (ptr);
	return (0);
}
