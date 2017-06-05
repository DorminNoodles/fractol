NAME = fractol
NAME_SRCS =	main.c


CC = clang



all : $(NAME)


$(NAME) :
	make -C	libft/
	make -C minilibx_macos/
	$(CC) $(NAME_SRCS) -I includes -I minilibx_macos/ -I libft/includes -I minilibx_macos -L minilibx_macos -lmlx -framework OpenGL -framework AppKit

re :
	make -C libft/ re
	make -C minilibx_macos/ re
