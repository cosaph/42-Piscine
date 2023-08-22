/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:53:41 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/09 10:11:48 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power < 1)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/* #include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
    printf("%d", ft_recursive_power(atoi(argv[1]),atoi(argv[2])));
}

 */