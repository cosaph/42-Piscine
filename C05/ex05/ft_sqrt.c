/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 09:35:32 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/11 11:57:48 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb && i <= 46340)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

/* #include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
  (void)argc;
	printf("%d",ft_sqrt(atoi(argv[1])));
}  */