/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:40:42 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/11 09:50:29 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}

/* #include <stdio.h>
int main(void)
{
    int	n;

    n = 4;
	printf("%d",ft_recursive_factorial(n));
} */