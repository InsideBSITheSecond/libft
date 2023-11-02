
#include "../../includes/atc.h"
#include "../../includes/ft_printf.h"
#include "../../includes/libft.h"

void	atc_clear(int fd)
{
	ft_putstr_fd("\x1B[2J", fd);
}

void	atc_move(int fd, int x, int y) 
{
	char *str = ft_strformat("\033[%i;%iH", y, x);
	ft_putstr_fd(str, fd);
	free(str);
}

void	atc_reset(int fd)
{
	atc_clear(fd);
	atc_move(fd, 1, 1);
}

void atc_getsize(int fd, int *cols, int *rows)
{
	struct winsize size;
	ioctl(fd, TIOCGWINSZ, &size);
	*cols = size.ws_col;
	*rows = size.ws_row;
}