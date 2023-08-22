/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 08:51:59 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/09 10:08:33 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if ((power == 0) || ((nb < 0) && (power == 0)))
		return (1);
	else
	{
		while (power > 0)
		{
			i = nb * i;
			power--;
		}
		return (i);
	}
}

/* #include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	printf("%d", ft_iterative_power(atoi(argv[1]),atoi(argv[2])));
} */