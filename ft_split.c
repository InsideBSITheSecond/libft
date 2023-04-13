/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: insidebsi <insidebsi@student.42.fr>        +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/04/09 13:01:56 by insidebsi         #+#    #+#             */
/*   Updated: 2023/04/09 20:10:14 by insidebsi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include "../libft-testers/libft-unit-test/include/libft_test.h"
// #include "../libft-testers/libft-unit-test/src/test_functions.c"

size_t	ft_sizeoracle(char *str, char del)
{
	size_t	i;
	int		trig;

	i = 0;
	trig = 0;
	while (*str)
	{
		//if (*str != del && trig)
		//i++;
		if (*str != del && !trig)
		{
			i++;
			trig = 1;
		}
		str++;
		if (*str == del && trig)
			trig = 0;
	}
	return (i);
}

char	*ft_getnextword(t_split_chunk chunk, char del)
{
	chunk.start = 0;
	chunk.end = 0;
	chunk.end = chunk.start;
	while ((char)chunk.remains[chunk.end] != del && chunk.remains[chunk.end])
		chunk.end++;
	chunk.word = ft_substr(chunk.remains, chunk.start, chunk.end
			- chunk.start);
	chunk.remains += chunk.end;
	return (chunk.word);
}

void	ft_unalloc(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i]);
}

/**
 * @brief  Splits the string [s] into substrings defined by the [c] delimiter
 * @param  char *s
 * @param  char *c
 * @retval char**
 */
char	**ft_split(const char *str, char del)
{
	char			**split;
	int				i;
	t_split_chunk	chunk;

	i = 0;
	chunk.remains = (char *)str;
	split = ft_calloc(ft_sizeoracle(chunk.remains, del) + 1, sizeof(char *));
	if (!split)
	{
		ft_unalloc(split);
		return (0);
	}
	while (chunk.remains[0] != '\0')
	{
		while (chunk.remains[0] == del)
			chunk.remains++;
		chunk.word = ft_getnextword(chunk, del);
		chunk.remains += ft_strlen(chunk.word);
		if (chunk.word[0] != '\0')
			split[i++] = chunk.word;
	}
	return (split);
}

// int main()
// {
// 	char *s = "      split       this for   me  !       ";

// 	char **result = ft_split(s, ' ');
// 	if (!result)
// 		exit(TEST_SUCCESS);
// 	exit(TEST_FAILED);
// }

// int	main(void)
// {
// 	char *s = "      split       this for   me  !       ";

// 	char **result = ft_split(s, ' ');
// 	if (!result)
// 		exit(TEST_SUCCESS);
// 	exit(TEST_FAILED);
// }
