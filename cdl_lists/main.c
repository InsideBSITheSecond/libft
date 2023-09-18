#include "../includes/libft.h"
#include <stdio.h> 

void print(void *lst)
{
	//printf("            %p\n", (t_cdllist *)lst);
	//printf("%p - %s - %p\n", ((t_cdllist *)lst)->prev, ((t_cdllist *)lst)->content, ((t_cdllist *)lst)->next);
	printf("%s | ", ((t_cdllist *)lst)->content);
}

int main()
{
	t_cdllist *lst = ft_cdllnew("1");
	ft_cdlladd_front(lst, ft_cdllnew("2"));
 	ft_cdlladd_front(lst, ft_cdllnew("3"));
	ft_cdlladd_front(lst, ft_cdllnew("4"));
	ft_cdlladd_front(lst, ft_cdllnew("5"));
	ft_cdlladd_front(lst, ft_cdllnew("6"));
	ft_cdlliter(lst, print);
	return (0);
}
