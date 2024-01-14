/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:49:30 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/01/14 19:02:46 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int lent_nbr(int n)
{
    int i;

    i = 0;
    if(n == 0)
        i++;
    if(n < 0)
        i++;
    while(n != 0)
    {
        n = n/10;
        i++;
    }
    return (i);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= 0)
	{
		if (n >= 0 && n <= 9)
		{
			c = n + 48;
			write(1, &c, 1);
		}
		else
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
	}
}

int print_nbr(int n)
{
    ft_putnbr(n);
    lent_nbr(n);
}
