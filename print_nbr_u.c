/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 21:39:25 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/01/14 19:02:14 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int lent_nbr_u(unsigned int n)
{
    int i;

    i = 0;
    if(n == 0)
        i++;
    while(n != 0)
    {
        n = n/10;
        i++;
    }
    return(i);
}

void	ft_putnbr_u(unsigned int n)
{
    char c;

    if (n >= 0 && n <= 9)
    {
        c = n + 48;
        write(1, &c, 1);
    }
    else
    {
        ft_putnbr_u(n / 10);
        ft_putnbr_u(n % 10);
    }
}

int print_nbr_u(unsigned int n)
{
    ft_putnbr_u(n);
    lent_nbr_u(n);
}
