/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:17:13 by jjacobi           #+#    #+#             */
/*   Updated: 2016/11/03 16:21:04 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int i;

	if (min >= max)
		return (NULL);
	result = (int*)malloc(sizeof(int) * (max - min));
	if (!result)
		return (NULL);
	i = 0;
	while ((min + i) < max)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
