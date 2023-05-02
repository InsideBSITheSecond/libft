/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:28:11 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/20 18:28:11 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 * @brief  Create and return a new list created by passing each nodes from [lst]
 * *  in the given function [f] and deleting it with [del] in case of error.
 * @param  t_list *lst
 * @param  void *f
 * @param  void *del
 * @retval t_list*
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*nl;
	t_list	*ne;

	if (!lst || !*f || !*del)
		return (0);
	nl = ft_lstnew(f(lst->content));
	while (lst->next)
	{
		lst = lst->next;
		ne = ft_lstnew(f(lst->content));
		if (!ne)
		{
			ft_lstclear(&nl, del);
			return (0);
		}
		ft_lstadd_back(&nl, ne);
	}
	return (nl);
}

// void	*ft_map(void *ct)
// {
// 	int i;
// 	void	*c;
// 	char	*pouet;

// 	c = ct;
// 	i = -1;
// 	pouet = (char *)c;
// 	while (pouet[++i])
// 		if (pouet[i] == 'o')
// 			pouet[i] = 'a';
// 	return (c);
// }

// void    ft_del(void *content)
// {
// 	free(content);
// }

// int main()
// {
// 	t_list *test;

// 	test = ft_lstnew(ft_strdup("lorem"));
// 	ft_lstadd_back(&test, ft_lstnew(ft_strdup("ispum")));
// 	ft_lstadd_back(&test, ft_lstnew(ft_strdup("dolor")));
// 	ft_lstadd_back(&test, ft_lstnew(ft_strdup("sit")));
// 	ft_lstadd_back(&test, ft_lstnew(ft_strdup("amet")));
// 	test = ft_lstmap(test, &ft_map, &ft_del);
// }
