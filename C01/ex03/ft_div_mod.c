/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:07:21 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/03 19:03:16 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
	{
		return ;
	}
	else
	{
		*div = a / b;
		*mod = a % b;
	}
}

/* 
#include <stdio.h>

int main(void)
{
    int    a;
    int b;
    int div;
    int mod;
    
    a = 6;
    b = 3;

    ft_div_mod(a, b, &div, &mod);
    printf("div = %i, mod = %i, real div = %i, real mod = %i\n", a, b, div, mod);
} */