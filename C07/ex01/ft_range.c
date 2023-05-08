/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:58:25 by marvin            #+#    #+#             */
/*   Updated: 2023/02/23 21:08:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	sayidegeri;
	int	*dizi;
	int	i;

	i = 0;
	sayidegeri = max - min;
	if (max <= min)
		return (0);
	dizi = (int *)malloc(sayidegeri * sizeof(int));
	while (min < max)
	{
		dizi[i] = min;
		i++;
		min++;
	}
	dizi[i] = '\0';
	return (dizi);
}
