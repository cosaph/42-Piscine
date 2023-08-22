/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:09:10 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/04 12:22:55 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] -= - ('a' - 'A');
		}
		i++;
	}
	return (str);
}

/* #include <stdio.h>
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		return (1);
	}
	printf("%s", ft_strlowcase(argv[1]));

} */