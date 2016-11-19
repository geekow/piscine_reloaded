/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:52:49 by jjacobi           #+#    #+#             */
/*   Updated: 2016/11/03 14:57:46 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return ((int)s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int		i1;
	int		i2;
	char	*temp;

	i1 = 1;
	i2 = 0;
	while (i1 < argc)
	{
		while (++i2 < argc)
			if (ft_strcmp(argv[i1], argv[i2]) < 0)
			{
				temp = argv[i1];
				argv[i1] = argv[i2];
				argv[i2] = temp;
			}
		i2 = 0;
		i1++;
	}
	while (argc - --i1 < argc)
	{
		ft_putstr(argv[argc - i1]);
		ft_putchar('\n');
	}
	return (0);
}
