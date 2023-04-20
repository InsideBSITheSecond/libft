/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:28:09 by llegrand          #+#    #+#             */
/*   Updated: 2023/04/20 18:28:09 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nl;

	if ((*lst)->next)
	{
		nl = (*lst)->next;
		ft_lstclear(&nl, del);
	}
	del(*lst);
	free(*lst);
	return ;
}

// int	main(void)
// {
// 	t_list *list = ft_lstnew("uwu");
// 	ft_lstadd_back(&list, ft_lstnew("owo"));
// 	ft_lstadd_back(&list, ft_lstnew("senpai"));
// 	ft_lstadd_back(&list, ft_lstnew("nyaaa"));
// 	ft_lstadd_back(&list, ft_lstnew("yamete"));
// 	ft_lstadd_back(&list, ft_lstnew("kudasai"));
// 	ft_lstclear(&list, &ft_lstdelone);
// }
