/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:15:34 by bguzel            #+#    #+#             */
/*   Updated: 2022/09/08 15:34:28 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int *c;
	c = a;
	printf("c = %p\n",c);
	a = b;
	printf("a = %p\n", a);
	b = c;
	printf("b = %p\n", b);

}

int	main()
{	
	int x;
	int y;

	x = 8;
	y = 9;
	printf("x = %p\n", &x);
	printf("y = %p\n", &y);
	ft_swap(&x,&y);
	printf("x = %p\n",&x);
	printf("y = %p\n", &y);
}
