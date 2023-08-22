/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:11:15 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/03 19:20:42 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;

	if (tab == 0)
	{
		return ;
	}
	index = 0;
	while (index < size / 2)
	{
		ft_swap(tab + index, tab + (size - 1) - index);
		index++;
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

/*  #include <stdio.h>
int main()
{
    
    int t[10] = {0,1,2,3,4,5,6,7,8,9};
    for ( int i = 0; i < 10 ; i++ )
        printf("t[%d]=%d\n",i,t[i]);
    ft_rev_int_tab(t, 10);
    printf("\n\nTableau inversé\n\n");
    for ( int i = 0; i < 10 ; i++ )
        printf("t[%d]=%d\n",i,t[i]);    
} */