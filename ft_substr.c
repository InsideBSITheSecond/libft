/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insidebsi <insidebsi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:30:46 by insidebsi         #+#    #+#             */
/*   Updated: 2023/04/09 14:08:21 by insidebsi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Returns a substring from [s]. The substring begins at index [start] and is of maximum size [len].
 * @note   Memory for the new string is obtained with malloc and can be freed with free
 * @param  char *s
 * @param  int start
 * @param  size_t len
 * @retval char*
 */
char *ft_substr(char const *s, unsigned int start, size_t len)
{
  void *p;
  
  p = ft_calloc(sizeof(char), len + 1);
  s += start;
  ft_strlcpy(p, s, len + 1);
  return (p);
}