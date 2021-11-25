#include "get_next_line.h"

int	main(void)
{
	int	fd;
	char	*line;

	// ft_strchr(0, '\n');
	// printf("%p\n", );
	fd = open("test.txt", O_RDONLY);
	// line = get_next_line(fd);
	// line = get_next_line(fd);
	// line = get_next_line(fd);
	// line = get_next_line(fd);
	// printf("............................................................\n");
	//line = get_next_line(fd);
	// printf("test1: %d\n", line[0]);
	printf("test2: %s\n", get_next_line(fd));
	printf("test3: %s\n", get_next_line(fd));
	printf("test3: %s\n", get_next_line(fd));
	printf("test3: %s\n", get_next_line(fd));
	printf("test3: %s\n", get_next_line(fd));
	// printf("test3: %s\n", get_next_line(fd));
	// printf("test3: %s\n", get_next_line(fd));
	return (0);
}
