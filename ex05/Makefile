CC = c++

NAME = Harl2.0

CFLAGS = -Wall -Wextra -Werror -std=c++98

CFILES = main.cpp\
		 Harl.cpp

ODIR = build

OFILES = $(addprefix $(ODIR)/, $(notdir $(CFILES:.cpp=.o)))

all: $(NAME)

$(ODIR)/%.o: %.cpp
	@mkdir -p $(ODIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

clean:
	rm -rf $(ODIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re