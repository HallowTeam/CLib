/*
** project.h for  in /home/olivie_v//file
**
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
**
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

void	my_printf(char *str, ...)
{
  va_list	args;

  va_start(args, str);
  while (*str)
  {
    ((*str == '%' && str++) ?
     ((*str == 'd') ? my_putdec(va_arg(args, int)) :
      ((*str == 'x') ? my_puthex(va_arg(args, int)) :
       ((*str == 'o') ? my_putoct(va_arg(args, int)) :
	((*str == 'b') ? my_putbin(va_arg(args, int)) :
	 ((*str == 'c') ? my_putchar(va_arg(args, int)) :
	  ((*str == 's') ? my_putstr(va_arg(args, char *)) :
	   ((my_putchar(*str))))))))) :
     ((my_putchar(*str))));
    str++;
  }
  va_end(args);
}
