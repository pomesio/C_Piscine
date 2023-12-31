/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 21:39:59 by jade-car          #+#    #+#             */
/*   Updated: 2023/07/27 23:22:59 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*s1 && *s2 && *s1 == *s2 && i < n)
	{
		++s1;
		++s2;
		i++;
	}
	if (i == n || (!*s1 && !*s2))
	{
		return (0);
	}
	return (*s1 - *s2);
}
