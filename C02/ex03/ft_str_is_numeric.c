/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:25:42 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/04 11:33:25 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if ((*str < '0' || *str > '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/* #include <stdio.h>
int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
    printf("%d",ft_str_is_numeric(argv[1]));
}
 */