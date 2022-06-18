CC = gcc

CFLAGS = -Wall -Werror -Wextra -g

SRCS = bucket.c convert.c convert2.c convert_chunk.c dict.c ft_string.c h_map.c main.c utils.c utils2.c parsing.c
OBJS = $(SRCS:.c=.o)
NAME = rush-02 

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

test_parsing:   parsing.o test_parsing.o
				$(CC) $(CFLAGS) -o $@ $^

test_hmap:		test_hmap.c h_map.o bucket.o ft_string.o
				$(CC) $(CFLAGS) -o $@ $^

test_dict:		dict.o ft_string.o test_dict.o bucket.o h_map.o utils.o
				$(CC) $(CFLAGS) -o $@ $^

test_convert:	test_convert.o bucket.o convert.o convert2.o h_map.o utils.o ft_string.o
				$(CC) $(CFLAGS) -o $@ $^

.c.o:
				$(CC) $(CFLAGS) -o $@ $< -c

re:				fclean $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

clean_test:
			$(RM) test_parsing test_parsing.o test_hmap test_hmap.o test_dict test_dict.o
