/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:06:22 by llegrand          #+#    #+#             */
/*   Updated: 2023/08/28 17:06:22 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcat(char *src, char *dst)
{
	char	*ret;
	int		i;
	int		j;

	if (!src)
		return (dst);
	if (!dst)
		return (src);
	i = 0;
	j = 0;
	while (src[i])
		i++;
	while (dst[j])
		j++;
	ret = malloc(sizeof(char) * (i + j + 1));
	ret[i + j] = '\0';
	while (--i >= 0)
		ret[i + j] = src[i];
	while (--j >= 0)
		ret[j] = dst[j];
	free(src);
	free(dst);
	return (ret);
}
