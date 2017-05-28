/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:22:53 by mcassar           #+#    #+#             */
/*   Updated: 2016/11/03 17:07:10 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	if (s1 == s2)
		return (0);
	while (*s1 == *s2 && s1 && s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}