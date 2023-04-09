/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insidebsi <insidebsi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:10:08 by insidebsi         #+#    #+#             */
/*   Updated: 2023/04/09 13:35:56 by insidebsi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Allocates memory for an array of [nmemb] elements of [size] bytes each and returns a pointer to the allocated memory
 * @param  size_t nmemb
 * @param  size_t size
 * @retval void*
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
  void *p;

  p = (void *)malloc(nmemb * size);
  if (!p)
    return (0);
  ft_bzero(p, nmemb);
  return (p);
}