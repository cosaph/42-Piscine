/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:23:15 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/09 10:10:06 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	k;
	int	f;

	k = 1;
	f = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1)
	{
		while (k <= nb)
		{
			f = k * f;
			k++;
		}
		return (f);
	}
	else
		return (0);
}

/* #include <stdio.h>

int main(void)
{
    int	n;

    n = 4;
	printf("%d",ft_iterative_factorial(n));
} */