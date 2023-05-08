/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: butatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 06:36:15 by butatar           #+#    #+#             */
/*   Updated: 2023/02/01 23:38:44 by butatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	r;

	r = 'z';
	while (r >= 'a')
	{
		ft_putchar(r);
		r--;
	}
}
