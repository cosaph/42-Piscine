/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:37:15 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/06 12:15:36 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~' + 1)
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
	{
		return (1);
	}
	printf("%d",ft_str_is_printable(argv[1]));
}
 */