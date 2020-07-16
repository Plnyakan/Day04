/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plnyakan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:39:40 by plnyakan          #+#    #+#             */
/*   Updated: 2020/07/16 10:58:47 by plnyakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_fibonacci(int index){

	if(index <= 1)
		return index;
	else 
		return ft_fibonacci(index-1) +ft_fibonacci(index -2);
}

int main(){
		
	int k =9;
	
	int	result =ft_fibonacci(k);
	printf("%d", result);

	return 0;
}
