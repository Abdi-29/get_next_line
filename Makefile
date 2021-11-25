all:
	gcc get_next_line.c get_next_line_utils.c main.c -D BUFFER_SIZE=50 && ./a.out
d:
	gcc  -fsanitize=address -g get_next_line.c get_next_line_utils.c main.c -D BUFFER_SIZE=1000 && ./a.out