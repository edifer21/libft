/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:37:29 by patferna          #+#    #+#             */
/*   Updated: 2024/10/28 13:37:29 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"
#include "string.h"

void ft_putstr_fd(char *s, int fd)
{
  size_t len = strlen(s);
write(fd, s,len);
}



int  main (void)
{
    char ptr[]= "me quedan 2 dias";

    int n;
    n = 1;    
    ft_putstr_fd( ptr, n);
}