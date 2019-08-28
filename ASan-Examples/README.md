## Running the program 
# Address Sanitization
> clang -fsanitize=address -g <file-name>.c ; ./a.out <cmd_line_args_if_any>
# Memory Leak
> clang -fsanitize=memory -g <file-name>.c ; ./a.out <cmd_line_args_if_any>
