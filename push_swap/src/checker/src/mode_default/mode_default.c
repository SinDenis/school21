#include "../../inc/checker.h"

void	    mode_default(t_stack *a, t_stack *b)
{
    char    *operation;

    operation = NULL;
    while (get_next_line(0, &operation) != 0)
    {
        if (operation_is_not_exist(operation))
            checker_error_exit(a, b, operation);
        operations_handler(a, b, operation);
    }
    if (stack_is_sort(a) && stack_is_empty(b))
        ft_printf("OK\n");
    else
        ft_printf("KO\n");
    ft_strdel(&operation);
}