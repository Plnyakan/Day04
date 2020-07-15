/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plnyakan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 16:15:44 by plnyakan          #+#    #+#             */
/*   Updated: 2020/07/15 16:15:47 by plnyakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power){

	int j =1;
	int k =nb;

	if (power<0)

		return 1/(nb *ft_iterative_power(nb,-power-1));
	if	(!power)
		return 1;

	while (power>1){
		
		if (power%2==1) j*= k;
		k =k*k;
		power = power/2;
	}
	return k*j;
}

int main(){

	int num =2;
	int exp =2;
	int result=ft_iterative_power(num,exp);

	printf("%d", result);
		return 0;
}
