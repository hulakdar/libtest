CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a
LPATH=../libft/

check: $(NAME)

$(NAME):
	make -C $(LPATH)
	cp $(LPATH)$(NAME) .
clean:
	make clean -C $(LPATH)
fclean: clean
	make fclean -C $(LPATH)
	rm -rf ischeck second libft libc third libft.a libft.txt libc.txt second.txt third.txt
ischeck: $(NAME) ischeck.c
	@gcc ischeck.c -o ischeck -L. -lft -I $(LPATH)
	@./ischeck
second:
	@gcc second.c $(CFLAGS) -o second -L. -lft -I $(LPATH)
	@./second | cat -e > second.txt
	diff -a -y test/second.txt second.txt
third:
	@gcc third.c $(CFLAGS) -o third -L. -lft -I $(LPATH) 
	@./third | cat -e > third.txt
	diff -a -y test/third.txt third.txt
stack: $(NAME)
	gcc stack.c $(CFLAGS) -o stack -L. -lft -I $(LPATH)
libft: check
	@gcc libft.c -o libft $(CFLAGS) -L. -lft -I $(LPATH)
libc: check
	@gcc libc.c -o libc $(CFLAGS) -L. -lft -I $(LPATH)
diff: libft libc
	@./libft | cat -e > libft.txt
	@./libc | cat -e > libc.txt
	@diff libft.txt libc.txt -a -y
normch:
	@norminette $(LPATH) | grep -s -B 1 'Warning\|Error' 
fcheck: diff ischeck second third fclean normch

re: fclean fcheck
	
.PHONY: fcheck diff ischeck second third libc libft check
