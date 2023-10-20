CC = gcc
CFLAGS = -Wall -Wextra -Werror

GET_NEXT_LINE_DIR = ./ft_get_next_line

SRC_FILES = get_next_line.c get_next_line_utils.c

OBJ_FILES = $(SRC_FILES:.c=.o)

OUTPUT_FILE = ft_get_next_line.a

all: $(OUTPUT_FILE)

%.o: $(GET_NEXT_LINE_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OUTPUT_FILE): $(OBJ_FILES)
	ar rcs $(OUTPUT_FILE) $(OBJ_FILES)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(OUTPUT_FILE)

re: fclean all

.PHONY: all clean fclean re
