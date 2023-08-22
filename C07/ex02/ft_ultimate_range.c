/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:56:58 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/16 17:09:52 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	bound;
	int	index;
	int	*buffer;
	int	*d;

	if (min >= max)
	{
		range = 0;
		return (0);
	}
	bound = max - min;
	buffer = malloc(bound * sizeof(int));
	if (!buffer)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index < bound)
	{
		buffer[index] = min + index;
		index++;
	}
	return (bound);
}

/* #include <stdio.h>
int main(){
	int *tab;
	int ret = ft_ultimate_range(&tab, 10, 20);
	for (int i = 0; i < 10; i++)
		printf("t[%d] = %d\n", i, tab[i]);
	printf("return = %d\n", ret);
} */