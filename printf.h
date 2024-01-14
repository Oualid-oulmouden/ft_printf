/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:27:33 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/01/14 19:55:07 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef printf_h
# define printf_h

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <strings.h>
# include <stdarg.h>

int	print_char(char c);
int print_hexa_maj(long n);
int print_hexa_min(long n);
int print_nbr_u(unsigned int n);
int print_nbr(int n);
int print_percent(void);
int print_ptr(long n);
int print_str(char *s);

#endif

