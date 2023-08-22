/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:40:30 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/07 08:19:00 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hexa(char c);
void	ft_putchar(char c);

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~' + 1)
		{
			ft_putchar(92);
			ft_putchar('0');
			ft_hexa(*str);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}

void	ft_hexa(char c)
{
	char	*hexa;
	char	converted[100];
	int		index;
	int		nb;

	nb = (unsigned char)c;
	index = 0;
	hexa = "0123456789abcdef";
	while (nb > 0)
	{
		converted[index] = hexa[nb % 16];
		nb /= 16;
		index++;
	}
	while (index > 0)
	{
		index--;
		ft_putchar(converted[index]);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* int		main()
{
	char str[128];
	for (int i = 1; i < 128; i++)
	{
		str[i - 1] = i;
	}

	ft_putstr_non_printable(str);
	ft_putchar('\n');
	ft_putstr_non_printable("Coucou\ntu vas bien ?");

	return (0);
} */