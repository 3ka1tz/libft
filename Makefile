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

# Source files
SRCS = ft_isalpha.c \
       ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_strlen.c

# Object files
OBJS = $(SRCS:.c=.o)

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

# 
fclean: clean
	rm -f $(NAME)

# Rebuild
re: fclean all

.PHONY: all clean fclean re
