/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:14:37 by marvin            #+#    #+#             */
/*   Updated: 2023/02/24 14:55:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	sayidegeri;
	int	*dizi;
	int	i;

	i = 0;
	sayidegeri = max - min;
	if (max <= min)
	{
		dizi = NULL;
		return (0);
	}
	dizi = (int *)malloc(sayidegeri * sizeof(int));
	if (dizi == NULL)
		return (-1);
	while (min < max)
	{
		dizi[i] = min;
		i++;
		min++;
	}
	dizi[i] = '\0';
	*range = dizi;
	return (sayidegeri);
}
