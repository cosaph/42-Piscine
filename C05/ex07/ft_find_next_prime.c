/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:11:42 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/12 09:58:51 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2 || nb == 3)
		return (1);
	else if (nb <= 1 || (nb % 2 == 0))
		return (0);
	i = 3;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (!(ft_is_prime(i)))
	{
		if (i < 2)
			return (2);
		i++;
	}
	return (i);
}

/* #include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
  (void)argc;
	printf("%d",ft_find_next_prime(atoi(argv[1])));
} */