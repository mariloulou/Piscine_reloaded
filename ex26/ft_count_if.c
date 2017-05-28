/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 08:18:11 by mcassar           #+#    #+#             */
/*   Updated: 2016/11/06 16:40:18 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (tab[a] != '\0')
	{
		if (f(tab[a]) == 1)
			b++;
		a++;
	}
	return (b);
}
