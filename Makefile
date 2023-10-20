CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIBFT = libft.a

FT_LIBFT = ft_libft/ft_libft.a
FT_PRINTF = ft_printf/ft_printf.a
FT_GET_NEXT_LINE = ft_get_next_line/ft_get_next_line.a

all: $(LIBFT)

$(LIBFT): $(FT_LIBFT) $(FT_PRINTF) $(FT_GET_NEXT_LINE)
	# Use 'ar' and 'ranlib' to create the final library
	ar rcs $(LIBFT) $(FT_LIBFT) $(FT_PRINTF) $(FT_GET_NEXT_LINE)
	ranlib $(LIBFT)

clean:
	# Clean all subprojects
	$(MAKE) -C ft_libft clean
	$(MAKE) -C ft_printf clean
	$(MAKE) -C ft_get_next_line clean

fclean: clean
	# Clean all subprojects and the final library
	$(MAKE) -C ft_libft fclean
	$(MAKE) -C ft_printf fclean
	$(MAKE) -C ft_get_next_line fclean
	rm -f $(LIBFT)

re: fclean all

.PHONY: all clean fclean re
