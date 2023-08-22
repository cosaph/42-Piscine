/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:41:34 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/16 09:55:15 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		lenght_nbr(int nbr, char *base, int lenght);
void	ft_putnbr_base_v2(int nbr, char *base, char *nbrf);
int		check_in_base(char *base, char c);
int		checkerror(char *str);
int		get_base_size(char *base);
int		ft_isspace(char c);
int		instring(char c, char *base);
int		ft_atoi_base(char *str, char *base);
int		checkerror(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	lenght_nbr(int nbr, char *base, int lenght)
{
	int				base_lenght;
	unsigned int	nb;

	base_lenght = ft_strlen(base);
	if (nbr < 0)
	{
		nb = nbr -1;
		lenght++;
	}
	else
		nb = nbr;
	while (nb >= (unsigned)base_lenght)
	{
		nb /= base_lenght;
		lenght++;
	}
	lenght++;
	return (lenght);
}

void	ft_putnbr_base_v2(int nbr, char *base, char *nbrf)
{
	int		lenght_base;
	long	nb;
	int		i;
	int		len_nbrf;

	lenght_base = ft_strlen(base);
	len_nbrf = lenght_nbr(nbr, base, 0);
	nb = nbr;
	i = 0;
	if (nb < 0)
	{
		nbrf[0] = '-';
		nb *= -1;
		i = 1;
	}
	len_nbrf--;
	while (nb >= lenght_base)
	{
		nbrf[len_nbrf] = base[nb % lenght_base];
		nb /= lenght_base;
		len_nbrf--;
	}
	if (nb < lenght_base)
		nbrf[i] = base[nb];
}

int	check_in_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (c);
		i++;
	}
	return (-1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*finalnbr;
	int		mednbr;
	int		lenght_nbrf;
	char	*d;

	if (checkerror(base_to) == 0 || checkerror(base_from) == 0)
		return (0);
	mednbr = ft_atoi_base(nbr, base_from);
	lenght_nbrf = lenght_nbr(mednbr, base_to, 0);
	finalnbr = (char *)malloc(sizeof(char) * (lenght_nbrf + 1));
	d = finalnbr;
	if (!d)
		return (0);
	ft_putnbr_base_v2(mednbr, base_to, finalnbr);
	finalnbr[lenght_nbrf] = '\0';
	return (finalnbr);
}

/* #include <stdio.h>
int main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	printf("\n%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
} */