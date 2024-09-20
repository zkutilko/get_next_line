#include "get_next_line_bonus.h"
#include <unistd.h>
#include <fcntl.h>

int	main(void)
{
	char	*line;
	int		fd;
	int		fd2;
	int		fd3;
	int		fdlong;
	int		i;
	int		j;

	fd = open("test.txt", O_RDONLY);
	//bonus
	fd2 = open("test2.txt", O_RDONLY);
	fd3 = open("test3.txt", O_RDONLY);
	fdlong = open("testlong.txt", O_RDONLY);

	i = 0;
	while (i < 5)
	{
		line = get_next_line(fd);
		printf("line %d: %s", i, line);
		free(line);
		//bonuses
		line = get_next_line(fd3);
		printf("line %d: %s", i, line);
		free(line);
		line = get_next_line(fd2);
		printf("line %d: %s", i, line);
		free(line);
		i++;
	}
	close(fd);
	close(fd2);
	close(fd3);
	write(1,"\n",1);
	j = 0;
	while (j < 2)
	{
		line = get_next_line(fdlong);
		printf("line %d: %s", j, line);
		free(line);
		j++;
	}
	close(fdlong);
	return (0);
}
