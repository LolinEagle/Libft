# Libft
This project is about coding a C library. It will contain a lot of general purpose functions.

## Additional functions
ft_substr : Allocates and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.

ft_strjoin : Allocates and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.

ft_strtrim : Allocates and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.

ft_split : Allocates and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.

ft_itoa : Allocates and returns a string representing the integer received as an argument. Negative numbers must be handled.

ft_strmapi : Applies the function f to each character of the string s, passing its index as the first argument and the character itself as the second. A new string is created to collect the results from the successive applications of f.

ft_striteri : Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary.

ft_putchar_fd : Outputs the character ’c’ to the given file descriptor.

ft_putstr_fd : Outputs the string ’s’ to the given file descriptor.

ft_putendl_fd : Outputs the string ’s’ to the given file descriptor followed by a newline.

ft_putnbr_fd : Outputs the integer ’n’ to the given file descriptor.

ft_lstnew : Allocates and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.

ft_lstadd_front : Adds the node ’new’ at the beginning of the list.

ft_lstsize : Counts the number of nodes in a list.

ft_lstlast : Returns the last node of the list.

ft_lstadd_back : Adds the node ’new’ at the end of the list.

ft_lstdelone : Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. The memory of ’next’ must not be freed.

ft_lstclear : Deletes and frees the given node and every successor of that node, using the function ’del’ and free. Finally, the pointer to the list must be set to NULL.

ft_lstiter : Iterates the list ’lst’ and applies the function ’f’ on the content of each node.

ft_lstmap : Iterates the list ’lst’ and applies the function ’f’ on the content of each node. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.

## Deployment
To deploy this project run
```bash
git clone https://github.com/LolinEagle/libft && cd libft && make
```
