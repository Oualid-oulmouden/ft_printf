/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:40:39 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/01/14 20:02:47 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int lent_ptr(long n)
{
    int i;

    i = 0;
    if(n == 0)
        return(1);
    if(n < 0)
        i++;
    while(n != 0)
    {
        n = n/16;
        i++;
    }
    return(i + 2);
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

void ft_ptr(long n)
{
    if(n == 0)
    {
        write(1,"0",1);
    }
    else
    {
        write(1,"0x",2);
        ft_hexa_min(n);
    }
}

int print_ptr(long n)
{
    ft_ptr(n);
    lent_ptr(n);
}

int main()
{
    printf("%d",print_ptr(0));
}