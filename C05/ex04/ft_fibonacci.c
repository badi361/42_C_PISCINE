/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:07:51 by bguzel            #+#    #+#             */
/*   Updated: 2022/09/14 18:13:52 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 1)
		return (1);
	else if(index == 0)
		return (0);
	else
		return (ft_fibonacci (index -1) + ft_fibonacci (index -2));
}

#include <stdio.h>
int main()
{
	printf("%d", ft_fibonacci(7));
}
