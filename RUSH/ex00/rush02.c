/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: butatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:28:18 by butatar           #+#    #+#             */
/*   Updated: 2023/02/05 23:34:11 by butatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int len, char first, char mid, char end)
{
	int	a;

	a = 1;
	while (a <= len)
	{
		if (a == 1)
			ft_putchar(first);
		else if (a == len)
			ft_putchar(end);
		else
			ft_putchar(mid);
		a++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	b;

	b = 1;
	if (x >= 1 && y >= 1)
	{
		while (b <= y)
		{
			if (b == 1)
				ft_print(x, 'A', 'B', 'A');
			else if (b == y)
				ft_print(x, 'C', 'B', 'C');
			else
				ft_print(x, 'B', ' ', 'B');
			b++;
		}
	}
	else
		write(1, "Hatalı giriş yaptınız lütfen pozitif tam sayı giriniz.", 60);
}
