/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:22:11 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/03 14:54:11 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t;
	int	t_bis;

	if (b == 0)
	{
		return ;
	}
	else
	{
		t = *a / *b;
		t_bis = *a % *b;
		*a = t;
		*b = t_bis;
	}
}

/* 
#include <stdio.h>

int main(void)
{
    int a;
    int b;
    a = 20;
    b = 12;
    ft_ultimate_div_mod(&a, &b);
    printf("a = %i, b = %i\n", a, b);
}
*/