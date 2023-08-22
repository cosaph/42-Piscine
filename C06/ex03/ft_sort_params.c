/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:15:32 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/16 13:37:54 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
void	ft_str_swap(char **a, char **b);
void	ft_sort_str_tab(char **tab, int size);

int	main(int argc, char **argv)
{
	int	i;

	ft_sort_str_tab(argv + 1, argc - 1);
	i = 0;
	while (++i < argc)
	{
		while (*argv[i])
			ft_putchar(*argv[i]++);
		ft_putchar('\n');
	}
	return (0);
}

void	ft_sort_str_tab(char **tab, int size)
{
	char	*pivot;
	int		i;
	int		j;

	if (size < 2)
		return ;
	pivot = tab[--size];
	i = 0;
	j = -1;
	while (++j < size)
		if (ft_strcmp(tab[j], pivot) < 0)
			ft_str_swap(&tab[i++], &tab[j]);
	if (ft_strcmp(tab[i], tab[size]) > 0)
		ft_str_swap(&tab[i], &tab[size]);
	ft_sort_str_tab(tab, i);
	ft_sort_str_tab(tab + i + 1, size - i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_str_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}
