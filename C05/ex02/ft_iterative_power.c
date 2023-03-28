/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:48:43 by bguzel            #+#    #+#             */
/*   Updated: 2022/09/14 17:54:04 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int a;

	a = 1;
	if (power == 0 || (power == 0 && nb == 0))
		return (1);
	else if (nb == 0 || power < 0)
		return (0);
	while (power > 0)
	{
		a *= nb;
		power--;
	}
	return (a);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_power(2, 3));
}
