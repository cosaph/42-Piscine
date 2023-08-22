/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:11:10 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/09 15:55:26 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_base_size(char *base);
int	ft_isspace(char c);
int	instring(char c, char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	i;
	int	sign;
	int	base_size;

	base_size = get_base_size(base);
	if (base_size < 2)
		return (0);
	n = 0;
	i = 0;
	sign = 1;
	while (str[i] != '\0' && ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] != '\0' && instring(str[i], base) > -1)
	{
		n = n * base_size + (instring(str[i], base));
		i++;
	}
	return (n * sign);
}

int	get_base_size(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+'
			|| (base[i] <= ' ' || base[i] > '~'))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	ft_isspace(char c)
{
	if ((c >= '\t' && c <= '\r') || c == ' ')
		return (1);
	return (0);
}

int	instring(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}


/* #include <stdio.h>
int main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("%i\n", ft_atoi_base(argv[1], argv[2]));
} */