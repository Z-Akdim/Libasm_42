NAME = libasm.a

SRC =	ft_strlen.s ft_strcpy.s ft_strdup.s ft_read.s ft_write.s ft_strcmp.s

OBJ_SRC = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ_SRC)
	@ar rcs $(NAME) $^

%.o: %.s
	nasm -f macho64 $< -o $@

clean:
	@rm -rf $(OBJ_SRC)

fclean: clean
	@rm -rf $(NAME) 

re: fclean all