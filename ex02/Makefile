NAME := xCast

CC := c++
CFLAG := -Wall -Wextra -Werror

SRC := main.cpp \
	Base.cpp \
	A.cpp \
	B.cpp \
	C.cpp


$(NAME): $(SRC)
	$(CC) $(CFLAG) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclaen: clean

re: fclaen
	make
