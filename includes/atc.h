/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atc.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insidebsi <insidebsi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:06:20 by insidebsi         #+#    #+#             */
/*   Updated: 2023/11/01 22:38:42 by insidebsi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/ioctl.h>

#ifndef ATC_H
# define ATC_H

# define ATC_NRM "\x1B[0m"
# define ATC_BLK "\x1B[1;30m"
# define ATC_RED "\x1B[1;31m"
# define ATC_GRN "\x1B[1;32m"
# define ATC_YEL "\x1B[1;33m"
# define ATC_BLU "\x1B[1;34m"
# define ATC_MAG "\x1B[1;35m"
# define ATC_CYA "\x1B[1;36m"
# define ATC_WHI "\x1B[1;37m"

# define ATC_B_BLK "\x1B[0;30m"
# define ATC_B_RED "\x1B[0;31m"
# define ATC_B_GRN "\x1B[0;32m"
# define ATC_B_YEL "\x1B[0;33m"
# define ATC_B_BLU "\x1B[0;34m"
# define ATC_B_MAG "\x1B[0;35m"
# define ATC_B_CYA "\x1B[0;36m"
# define ATC_B_WHI "\x1B[0;37m"

# define ATC_CLEAR "\x1B[2J"
# define ATC_RESET "\x1B[2J\033[1;1H"

void	atc_clear(int fd);
void	atc_move(int fd, int x, int y);
void	atc_reset(int fd);

void	atc_fprintf(int fd, char *str);
void	atc_getsize(int fd, int *cols, int *rows);
#endif