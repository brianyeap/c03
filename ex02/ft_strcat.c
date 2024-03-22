/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 23:06:26 by brian             #+#    #+#             */
/*   Updated: 2024/03/22 23:06:43 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
    dest[i + j] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	char test[30] = "Your mom";
// 	printf("%s", ft_strcat(test, " gay"));
// 	return (0);
// }