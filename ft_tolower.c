/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-14 09:58:46 by patferna          #+#    #+#             */
/*   Updated: 2024-10-14 09:58:46 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>
 int ft_tolowe(int c)
 {
    if  (c >= 'A' && c <= 'Z' )
    {
        return  c + 32;
    }
    return c;
 
 }
  int main (void)
 {
   int c;
   c = 'z';
  ft_toupper (c);
char a = ft_toupper (c);
 
  printf("%c\n",a);


}
