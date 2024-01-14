CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

files_c = print_char.c \
	print_hexa_maj.c \
	print_hexa_min.c \
	print_nbr_u.c \
	print_nbr.c \
	print_percent.c \
	print_ptr.c \
	print_str.c \
	
files_o = $(files_c:.c=.o)

all: $(NAME)

$(NAME): $(files_o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@
	ar -r $(NAME) $@

clean:
	rm -f $(files_o)

fclean:
	rm -f $(files_o) $(NAME)

re: fclean all


