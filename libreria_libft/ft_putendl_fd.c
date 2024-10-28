/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:47:31 by patferna          #+#    #+#             */
/*   Updated: 2024/10/28 13:47:31 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"
#include "string.h"

void ft_putnbr_fd(int n, int fd)
{
    char *ptr;
    size_t len;
    

    ptr = ft_itoa(n);
    len = strlen(ptr);
    write(fd,ptr, len);

}

int main(void)
{  
    int n;
    int fd;
    fd = 1;
    n = 123;
    ft_putnbr_fd(n,fd);
}