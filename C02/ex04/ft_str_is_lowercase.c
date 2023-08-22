/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:59:52 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/04 11:56:01 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
		{
			return (0);
		}
		str ++;
	}
	return (1);
}

/* #include <stdio.h>
int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
    printf("%d",ft_str_is_lowercase(argv[1]));
}
*/