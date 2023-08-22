/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:15:52 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/03 19:21:56 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	if (tab == 0)
		return ;
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(tab + j, tab + j + 1);
			j++;
		}
		i++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	if (a == 0 || b == 0)
		return ;
	temp = *a;
	*a = *b;
	*b = temp;
}

/* #include <stdio.h>
int main()
{
	
	int t[10] = {9,5,6,9,7,2,-5,10,0,1};
	for ( int i = 0; i < 10 ; i++ )
		printf("t[%d]=%d\n",i,t[i]);
	ft_sort_int_tab(t, 10);
	printf("\n\nTableau trié\n\n");
	for ( int i = 0; i < 10 ; i++ )
		printf("t[%d]=%d\n",i,t[i]);    
} */