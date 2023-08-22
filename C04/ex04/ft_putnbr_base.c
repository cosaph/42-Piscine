/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:49:20 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/09 15:54:04 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		get_base_size(char *base);
void	printnbr_base(int nbr, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_size;
	long	n;

	n = (long)nbr;
	base_size = get_base_size(base);
	if (base_size < 2)
		return ;
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * (-1);
	}
	if (n >= base_size)
	{
		ft_putnbr_base(n / base_size, base);
		ft_putnbr_base(n % base_size, base);
	}
	else
	{
		printnbr_base(n, base);
	}
}

int	get_base_size(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+'
			|| (base[i] <= ' ' || base[i] > '~'))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	printnbr_base(int nbr, char *base)
{
	char	c;

	c = base[nbr];
	write(1, &c, 1);
}


/* #include <stdio.h>
#include <stdlib.h>
int    main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	ft_putnbr_base(atoi(argv[1]), argv[2]);
} */