/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 10:03:00 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/14 17:50:08 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_abs(int nb)
{
	if (nb > 0)
		return (nb);
	return (-nb);
}

void	ft_solve(char *tab, int x, int *nb_sol)
{
	int	i;
	int	j;

	if (x == 10)
	{
		x = -1;
		while (x++ < 9)
			ft_putchar(tab[x] + '0');
		ft_putchar('\n');
		(*nb_sol)++;
		return ;
	}
	i = -1;
	while (++i < 10)
	{
		j = 0;
		while (j < x && (i != tab[j] && ft_abs(tab[j] - i) != x - j))
			j++;
		if (j >= x)
		{
			tab[x] = i;
			ft_solve(tab, x + 1, nb_sol);
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	tab[10];
	int		max;

	ft_solve(tab, 0, &max);
	return (max);
}

#include <stdio.h>

int main(void)
{
	printf("%d",ft_ten_queens_puzzle());
}
