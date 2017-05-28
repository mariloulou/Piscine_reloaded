/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:56:58 by mcassar           #+#    #+#             */
/*   Updated: 2016/11/06 17:09:33 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int result;

	if (nb < 0 || nb > 12)
		return (0);
	result = 1;
	if (nb > 1)
		result = (nb * ft_recursive_factorial(nb - 1));
	return (result);
}
