#include "includes/libft.h"

int main()
{
	char *str = "-5642321";
	
	ft_printf("%s\n", str);
	ft_printf("%i\n", !ft_strcontsowpref(str, "0123456789", '+'));
	ft_printf("%i\n", !ft_strcontsowpref(str, "0123456789", '-'));
	ft_printf("%i\n", !ft_strcontsowpref(str, "0123456789", '+') && !ft_strcontsowpref(str, "0123456789", '-'));
}
