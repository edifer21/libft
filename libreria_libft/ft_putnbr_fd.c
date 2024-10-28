/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:03:52 by patferna          #+#    #+#             */
/*   Updated: 2024/10/28 14:03:52 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr_fd(int n, int fd)
{
    char *ptr;
    
    ptr = 
    write(fd, n, strlen(ptr));

}

int main(void)
{
    int n;
    int fd;
    fd = 1;
    n = 123;
    ft_putnbr_fd(n,fd);
}