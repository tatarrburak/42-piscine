/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:33:59 by marvin            #+#    #+#             */
/*   Updated: 2023/02/24 14:56:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dizi;
	int		i;
	int		j;
	int		diziindex;

	dizi = malloc(sizeof(strs));
	i = 0;
	diziindex = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			dizi[diziindex++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			dizi[diziindex++] = sep[j++];
		}
		i++;
	}
	dizi[diziindex] = '\0';
	return (dizi);
}
