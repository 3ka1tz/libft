# Program name
NAME = libft.a

# Compiler
CC = cc

# Compiler flags
#  Wall: enable common warnings
#  Wextra: enable extra warnings
#  Werror: treat warnings as errors
CFLAGS = -Wall -Wextra -Werror

# Archiver
AR = ar

# Archiver flags
#  r: 
#  c: 
#  s: 
ARFLAGS = rcs

SRC_DIR = src

# Source files
SRCS = ft_bzero.c   \
       ft_isalnum.c \
       ft_isalpha.c \
       ft_isascii.c \
       ft_isdigit.c \
       ft_isprint.c \
       ft_memcpy.c  \
       ft_memmove.c \
       ft_memset.c  \
       ft_strlen.c

# Object files
OBJS = $(SRC_DIR/SRCS:.c=.o)

# Default rule (called when you just run `make`)
all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Link object files to create executable
$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

# Remove object files
clean:
	rm -f *.o

# Remove object files and executable
fclean: clean
	rm -f $(NAME)

# Rebuild
re: fclean all

.PHONY: all clean fclean re
