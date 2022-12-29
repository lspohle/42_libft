# The first project of the core curriculum - libft
Libft is the first project of the core curriculum of the [42](https://42wolfsburg.de) network. The project is about coding your own C library. It contains various general purpose functions.

## Part 1: libc functions
    int     ft_isalpha(int c);
    int     ft_isdigit(int c);
    int     ft_isalnum(int c);
    int     ft_isascii(int c);
    int     ft_isprint(int c);
    size_t  ft_strlen(const char *str);
    void    *ft_memset(void *b, int c, size_t len);
    void    ft_bzero(void *s, size_t n);
    void    *ft_memcpy(void *dst, const void *src, size_t n);
    void    *ft_memmove(void *dst, const void *src, size_t len);
    size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
    size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
    int     ft_toupper(int c);
    int     ft_tolower(int c);
    char    *ft_strchr(const char *s, int c);
    char    *ft_strrchr(const char *s, int c);
    int     ft_strncmp(const char *s1, const char *s2, size_t n);
    void    *ft_memchr(const void *s, int c, size_t n);
    int     ft_memcmp(const void *s1, const void *s2, size_t n);
    char    *ft_strnstr(const char *s1, const char *s2, size_t len);
    int     ft_atoi(const char *str);
    void    *ft_calloc(size_t count, size_t size);
    char    *ft_strdup(const char *src);
    
## Part 2: additional functions
    char    *ft_substr(const char *s, unsigned int start, size_t len);
    char	*ft_strjoin(const char *s1, const char *s2);
    char	*ft_strjoin.c
    char	*ft_strtrim(const char *s1, const char *set);
    char	**ft_split(const char *str, char c);
    char	*ft_itoa(int n);
    char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
    void	ft_striteri(char *s, void (*f)(unsigned int, char *));
    void	ft_putchar_fd(char c, int fd);
    void	ft_putstr_fd(char *c, int fd);
    void	ft_putendl_fd(char *c, int fd);
    void	ft_putnbr_fd(int n, int fd);
    
## Part 3: bonus functions
    t_list  *ft_lstnew(void *content);
    void    ft_lstadd_front(t_list **lst, t_list *new);
    int     ft_lstsize(t_list *lst);
    t_list  *ft_lstlast(t_list *lst);
    void    ft_lstadd_back(t_list **lst, t_list *new);
    
# My repository and your benefit
In my repository you'll find two directories. 

## The first directory: [libft_functions](https://github.com/lspohle/libft/tree/main/libft_functions)
As the name suggests, libft_functions contains all the functions I wrote as part of the project libft. In addition to the required functions, it contains a Makefile and a Headerfile which is named libft.h.

    1. Git clone the current repository (you need to generate an SSH Key in advance to be able to git clone) into a directory on your device.
    2. Go into the directory libft_functions with your terminal.
    3. Enter the command 'make' in order to create the archive libft.a.
    4. Copy the headerfile libft.h and the archive libft.a into the directory you'd like to use the library.
    5. Refer to the library by adding '#include "libft.h"' at the top of the file where your sorce code is written.
    6. Compile by using the command 'gcc -Wall -Werror -Wextra your_file.c libft.a' and execute.

## The second directory: [libft_test_program](https://github.com/lspohle/libft/tree/main/libft_test_program)
This directory might be even more interesting for you. It is a test program for your own libft project. While I worked on libft, I used a test program I installed from the Internet. It works perfectly fine and increased my awareness of error handling. But I wanted to expand my horizon and, therefore, I wrote my own test program. Even though, it was not required to write your own test program for libft, I genuily enjoyed it and learned a lot while writing it. It works great as a basic test program and has a clean structure. Caution: It might not check for memory leaks, for instance, or whether you allocated more than the nessecariy amount of bytes on the heap.

    1. Git clone the current repository (you need to generate an SSH Key in advance to be able to git clone) into a directory on your device.
    2. Go into the directory libft_test_program with your terminal.
    3. Open the test files in which file descriptors are used (ft_putchar_fd_test.c, ft_putendl_fd_test.c, ft_putnbr_fd_test.c and ft_putstr_fd_test.c) and adjust the path you refer to while using open(), for instance)
    4. Enter the command 'make' in order to create the archive test.a.
    5. Copy the directory txt_files, the headerfile test.h, the archive test.a and the sorce file main.c into the directory you'd like to use the test program in.
    6. Compile by using the command 'gcc -Wall -Werror -Wextra main.c test.a your_library.a' and execute.
    7. If you run the program, it'll ask you for a function to test ("Function: "). You need to enter the function, you'd like to test ('bzero' or 'isalpha'). You can also test multiple function at once by referring to them ('libc' or 'additional' or 'bonus' or 'all').

### Specific resources
While coding, I found various resources that helped me a lot to dive deeper into C and understand the concept of specific functions.

    You'll find those resources in the sorce file of the function you're looking for
    
### General resources
- [Creating an alias](https://wpbeaches.com/make-an-alias-in-bash-or-zsh-shell-in-macos-with-terminal/)
- [Using color in your terminal](https://www.theurbanpenguin.com/4184-2/)
- [Struct](https://www.youtube.com/watch?v=dqa0KMSMx2w)
- [Linked lists](https://www.youtube.com/watch?v=VOpjAHCee7c)

### Recommendations for libft
I'd recommend you to start your project with coding a few libc functions and contiue with creating your Makefile as well as your headerfile. If you write those two files in the beginning, you don't have to handle such a big amount of functions. Moreover, it's worth it to do the bonus as well because you'll need the concept of structs and linked lists later anyway. Don't stress yourself. You still need to enjoy coding. Therefore, I'd recommend you to write your own test program. It reinforces what you've learned, and I made the experience that it was the part I had the most fun with while working on libft.
    
# Contacting me
If you seek help or questions are left unanswered, don't hesitate to contact me (lspohle@student.42wolfsburg.de).
