/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:52:17 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/01/14 18:56:01 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int lent_str(char *s)
{
	int i;
	
	i = 0;
	if(!s)
		return (6);
	while(s[i])
		i++;
	return (i)
}

void	ft_str(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		write(1, "null\n", 6);
		return;
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

