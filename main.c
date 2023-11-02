/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llegrand <llegrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:12:07 by insidebsi         #+#    #+#             */
/*   Updated: 2023/11/02 17:12:18 by llegrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// gcc main.c atc/*.c -g3 -L. -lft; ./a.out

#include <stdio.h>
#include "includes/atc.h"
#include "includes/ft_printf.h"
#include "includes/libft.h"

int	main()
{
	int		tty = 2;
	//char	*filename = ft_strformat("/dev/pts/%i", tty); linux
	char	*filename = ft_strformat("/dev/ttys00%i", tty); //osx
	int		fd = open(filename, O_WRONLY);
	
	char *str = ft_strformat("%shello world\n%s", ATC_RED, ATC_NRM);
	int rows, cols;

	atc_getsize(fd, &cols, &rows);
	atc_reset(fd);
	atc_move(fd, (cols - ft_strlen(str) / 2) / 2, rows / 2);
	ft_putstr_fd(str, fd);
}
