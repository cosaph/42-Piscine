/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:40:42 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/16 17:10:48 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	j;

	j = 0;
	if (min >= max)
		return (NULL);
	tab = malloc (max * sizeof(int));
	if (!tab)
		return (NULL);
	i = -1;
	while (i++ < max)
	{
		tab[j] = min + i;
		j++;
	}
	return (tab);
}

/* #include <stdio.h>
int main()
{
	int    *t = ft_range(10, 20);
	for (int i = 0; i < 10; i++)
		printf("t[%d] = %d\n", i, t[i]);

}
 */