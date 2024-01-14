/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa_min.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 13:01:01 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/01/14 18:50:05 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int lent_hexa(long n)
{
    int i;

    i = 0;
    if(n == 0)
        i++;
    if(n < 0)
        i++;
    while(n != 0)
    {
        n = n/16;
        i++;
    }
    return(i);
}

void ft_hexa_min(long n)
{
    char c;

    c = '-';
    if(n < 0)
    {
        write(1, &c, 1);
        n *= -1;
    }
    if(n >= 16)
    {
        ft_hexa_min(n / 16);
        ft_hexa_min(n % 16);
        
    }
    if(n >= 0 && n <= 9)
    {
        n = n + 48;
        write(1, &n ,1);
    }
    if(n >= 10 && n<= 15)
    {
        n = n + 87;
        write(1 , &n, 1);
    }
}

int print_hexa_min(long n)
{
    ft_hexa_min(n);
    lent_hexa(n);
}
