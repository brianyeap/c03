/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 01:27:10 by brian             #+#    #+#             */
/*   Updated: 2024/03/23 02:05:00 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
    
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}	
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int main()
{
	char str1[] = "Hello, world!";
	char str2[] = "world";
	char str3[] = "Hello";
	char str4[] = "foo";
	
	printf("'%s' found in '%s' at position: %s\n", str2, str1, ft_strstr(str1, str2));
	printf("'%s' found in '%s' at position: %s\n", str3, str1, ft_strstr(str1, str3));
	printf("'%s' found in '%s' at position: %s\n", str4, str1, ft_strstr(str1, str4));
	
	return 0;
}
*/