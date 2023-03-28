/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:38:03 by bguzel            #+#    #+#             */
/*   Updated: 2022/09/07 18:53:08 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
#include <stdio.h>
int	main()
{
	int nbr = 5;
	int *pt = &nbr;
	int **pt2 = &pt;
	int ***pt3 = &pt2;
	int ****pt4 = &pt3;
	int *****pt5 = &pt4;
	int ******pt6 = &pt5;
	int *******pt7 = &pt6;
	int ********pt8 = &pt7;
	int *********pt9 = &pt8;
	ft_ultimate_ft(&pt8);
	printf("%d",nbr);
}
