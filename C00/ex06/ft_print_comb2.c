/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:12:51 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/03 10:51:31 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char c);
void	print_digit(int n);

void	ft_print_comb2(void)
{
	int	first_digit;
	int	second_digit;

	first_digit = 0;
	while (first_digit <= 98)
	{
		second_digit = first_digit + 1;
		while (second_digit <= 99)
		{
			print_digit(first_digit);
			ft_putchar(' ');
			print_digit(second_digit);
			if (first_digit != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second_digit++;
		}
		first_digit++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_digit(int n)
{
	if (n < 10)
	{
		ft_putchar('0');
		ft_putchar(n + 48);
		return ;
	}
	ft_putchar((n / 10) + 48);
	ft_putchar((n % 10) + 48);
}

int main(void){
    ft_print_comb2();
    return (0);
}