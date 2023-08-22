/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:56:16 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/06 12:11:56 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char str);
int	ft_str_is_uppercase(char str);
int	ft_str_is_lowercase(char str);
int	ft_str_is_numeric(char str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if ((ft_str_is_numeric(str[i]) == 1) || (ft_str_is_alpha(str[i]) == 1))
		{
			if (ft_str_is_lowercase(str[i]) == 1)
				str[i] -= 32;
			j = i + 1;
			while ((ft_str_is_alpha(str[j]) == 1
					|| ft_str_is_numeric(str[j])) == 1
				&& str[j] != '\0')
			{
				if (ft_str_is_uppercase(str[j]))
					str[j] += 32;
				j++;
			}
			i = j;
		}
		i++;
	}
	return (str);
}

int	ft_str_is_alpha(char str)
{
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	else
		return (0);
}

/* #include <stdlib.h>
#include <stdio.h>
int main()
{
	char s[100] = "==salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n",s);
	ft_strcapitalize(s);
	printf("%s",s);
} */