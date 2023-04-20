/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmotoi <mmotoi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:49:40 by mmotoi            #+#    #+#             */
/*   Updated: 2020/07/11 05:40:52 by mmotoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



static int	ft_isspace(unsigned char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

void ft_clearbuff(char *s, int len)
{
	int i;
	i = 0;
	while (i < len)
	{
		s[i] = 0;
		i++;
	}
}

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
int main()
{
	printf("0 ft %d\n",ft_atoi("0"));
	printf("0    %d\n",atoi("0"));
	printf("+ ft %d\n",ft_atoi("+300"));
	printf("+    %d\n",atoi("+300"));
	printf("- ft %d\n",ft_atoi("-300"));
	printf("-    %d\n",atoi("-300"));
	printf("-+ ft %d\n",ft_atoi("-+2147483"));
	printf("-+    %d\n",atoi("-+2147483"));
	printf("-- ft %d\n",ft_atoi("--300"));
	printf("--    %d\n",atoi("--300"));
	printf("INT MAX ft %d\n",ft_atoi("2147483647"));
	printf("INT MAX    %d\n",atoi("2147483647"));
	printf("INT MIN ft %d\n",ft_atoi("-2147483648"));
	printf("INT MIN    %d\n",atoi("-2147483648"));
	printf("INT OVER ft %d\n",ft_atoi("30000000000"));
	printf("INT OVER    %d\n",atoi("30000000000"));
	printf("-INT OVER ft %d\n",ft_atoi("-30000000000"));
	printf("-INT OVER    %d\n",atoi("-30000000000"));
	printf("+LONG ft %ld\n",ft_atoi("9223372036854775807"));
	printf("+LONG    %ld\n",atoi("9223372036854775807"));
	printf("-LONG ft %ld\n",ft_atoi("-9223372036854775808"));
	printf("-LONG    %ld\n",atoi("-9223372036854775808"));
	printf("LONG OVER ft %ld\n",ft_atoi("44444119223372036854775807"));
	printf("LONG OVER    %ld\n",atoi("44444119223372036854775807"));
	printf("-LONG OVER ft %ld\n",ft_atoi("-1000000000000000000000"));
	printf("-LONG OVER    %ld\n",atoi("-1000000000000000000000"));
	printf("UNSIGNED LONG MAX ft %ld\n",ft_atoi("18446744073709551615"));
	printf("UNSIGNED LONG MAX    %ld\n",atoi("18446744073709551615"));
	printf("-UNSIGNED LONG MAX ft %ld\n",ft_atoi("-18446744073709551615"));
	printf("-UNSIGNED LONG MAX    %ld\n",atoi("-18446744073709551615"));
	printf("UNSIGNED LONG OVER ft %d\n",ft_atoi("10000000000000000"));
	printf("UNSIGNED LONG OVER    %d\n",atoi("10000000000000000"));
	printf("-UNSIGNED LONG OVER ft %d\n",ft_atoi("-30000000000000000"));
	printf("-UNSIGNED LONG OVER    %d\n",atoi("-30000000000000000"));
	printf("ulongover1 ft %ld\n",ft_atoi("18446744073709551616"));
	printf("ulongover1    %ld\n",atoi("18446744073709551616"));
	printf("ulongover2 ft %ld\n",ft_atoi("18446744073709551617"));
	printf("ulongover2    %ld\n",atoi("18446744073709551617"));
	printf("ulongover3 ft %ld\n",ft_atoi("18446744073709551618"));
	printf("ulongover3    %ld\n",atoi("18446744073709551618"));
	printf("ulongover4 ft %ld\n",ft_atoi("18446744073709551619"));
	printf("ulongover4    %ld\n",atoi("18446744073709551619"));
}
