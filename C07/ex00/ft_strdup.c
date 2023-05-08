/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:24:53 by marvin            #+#    #+#             */
/*   Updated: 2023/02/24 14:51:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		x;
	char	*dest;
	int		i;

	x = ft_strlen(src);
	dest = (char *)malloc(x * sizeof(char));
	i = 0;
	while (i < x)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
