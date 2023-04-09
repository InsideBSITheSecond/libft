/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insidebsi <insidebsi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:43:53 by insidebsi         #+#    #+#             */
/*   Updated: 2023/04/09 14:36:42 by insidebsi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Returns a copy of [s1] with the characters specified in [set]
 * removed from the beginning and the end of the string.
 * @note   Memory for the new string is obtained
 * with malloc and can be freed with free
 * @param  char *s1
 * @param  char *set
 * @retval char*
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	i = 0;
	start = 0;
	end = ft_strlen((char *)s1);
	while (s1[start] && ft_ismemberof(s1[start], \
		(char *)set, ft_strlen((char *)set)))
		start++;
	while (end > start && ft_ismemberof(s1[end - 1], \
		(char *)set, ft_strlen((char *)set)))
		end--;
	str = ft_calloc(end - start + 1, sizeof(char));
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

// int main()
// {
// 		char s1[] = "lorem ipsum dolor sit amet";
// 		ft_strtrim(s1, "tel");
// }