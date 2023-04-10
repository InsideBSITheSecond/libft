/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insidebsi <insidebsi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 13:01:56 by insidebsi         #+#    #+#             */
/*   Updated: 2023/04/09 20:10:14 by insidebsi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief  Calculate the final count of splits we'll have
 * @param  char *s
 * @param  char c
 * @retval size_t
 */
static size_t ft_split_getnbr(char const *s, char c)
{
	size_t splitc;
	size_t i;

	splitc = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			splitc++;
		i++;
	}
	return (splitc);
}

/**
 * @brief  Allocate and zero the memory to store the split
 * @param  char *s
 * @param  char c
 * @retval char**
 */
static char **ft_split_alloc(char const *s, char c, size_t fcount)
{
	(void)s;
	(void)c;
	(void)fcount;
	char **str;

	str = (char **)ft_calloc(500, sizeof(char));
	return (str);
}

/**
 * @brief  Do the actual splitting job
 * @param  char *s
 * @param  char *c
 * @retval char**
 */
static void ft_split_splitter(char **split, const char *s, char c, size_t fcount)
{
	size_t i;
	size_t count;
	t_split_chunk chunk;

	i = 0;
	count = 0;
	chunk.start = 0;
	chunk.end = 0;
	chunk.offset = 0;
	while (fcount >= count)
	{
		if (s[i] == c)
		{
			chunk.start = chunk.end;
			chunk.end = i;
			split[count] = ft_substr(s, chunk.start + chunk.offset, chunk.end - chunk.start - chunk.offset);
			count++;
			chunk.offset = 1;
		}
		i++;
	}
}

/**
 * @brief  Splits the string [s] into substrings defined by the [c] delimiter
 * @param  char *s
 * @param  char *c
 * @retval char**
 */
char **ft_split(char const *s, char c)
{
	char **str;
	size_t fcount;

	fcount = ft_split_getnbr(s, c);
	str = ft_split_alloc(s, c, fcount);
	ft_split_splitter(str, s, c, fcount);
	return (str);
}
