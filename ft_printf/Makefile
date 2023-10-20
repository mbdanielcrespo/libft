CC = gcc
CFLAGS = -Wall -Wextra -Werror

PRINTF_DIR = ./ft_printf

SRC_FILES = ft_printf.c ft_printf_ptr.c

OBJ_FILES = $(SRC_FILES:.c=.o)

OUTPUT_FILE = ft_printf.a

all: $(OUTPUT_FILE)

%.o: $(PRINTF_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OUTPUT_FILE): $(OBJ_FILES)
	ar rcs $(OUTPUT_FILE) $(OBJ_FILES)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(OUTPUT_FILE)

re: fclean all

.PHONY: all clean fclean re
