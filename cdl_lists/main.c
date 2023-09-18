/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insidebsi <insidebsi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 22:40:08 by insidebsi         #+#    #+#             */
/*   Updated: 2023/09/18 22:40:08 by insidebsi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h> 

void print(void *lst)
{
	printf("%s | ", ((t_cdllist *)lst)->content);
}

void printall(void *lst)
{
	printf("\n          %p\n", (t_cdllist *)lst);
	printf("%p - %s - %p\n", ((t_cdllist *)lst)->prev, ((t_cdllist *)lst)->content, ((t_cdllist *)lst)->next);
}


int main(int argc, char **argv)
{
	t_cdllist	*stack_a;

	if (argc >= 2)
	{
		stack_a = ft_cdllnew(argv[1]);
		for (int i = 2; i <= argc - 1; i++)
			ft_cdlladd_back(&stack_a, ft_cdllnew(argv[i]));
	}
	ft_cdlliter(stack_a, print);
	ft_cdlliter(stack_a, printall);
	return (0);
}
