/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffierro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:42:38 by ffierro-          #+#    #+#             */
/*   Updated: 2024/09/28 16:43:25 by ffierro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	int		fd;
	char	*line;
	int		i;

	i = 0;
	fd = open("prueba.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("aqui: %s", line);
	/*while (line)
	{
		printf("xd");
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		i++;
		printf("cositas");
	}*/
	free(line);
	close(fd);
	return (0);
}
