/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottet <ccottet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:20:21 by ccottet           #+#    #+#             */
/*   Updated: 2023/08/04 13:19:10 by ccottet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
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
    if (argc !=2)
    {
        return (1);
    }
    printf("%d", ft_str_is_uppercase(argv[1]));

} */