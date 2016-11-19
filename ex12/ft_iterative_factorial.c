/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:10:12 by jjacobi           #+#    #+#             */
/*   Updated: 2016/11/03 19:09:10 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb == 0)
		return (result);
	else if (0 < nb && nb < 13)
	{
		while (nb > 0)
		{
			result = result * nb--;
		}
		return (result);
	}
	else
		return (0);
}
