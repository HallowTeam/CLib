/*
** project.h for  in /home/olivie_v//file
** 
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
** 
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

char	*my_dectostr(int num, char *basis)
{
  int	i;
  char	*str;
  int	size;
  int	length;
  int	parts[2];

  i = 1;
  length = my_strlen(basis);
  size = my_convertsize(num, length) + ((num < 0)? 1 : 0);
  str = malloc((size + 1) * sizeof(*str));
  str[0] = ((num < 0) ? '-' : basis[0]);
  parts[1] = (num % length) * ((num < 0) ? -1 : 1);
  parts[0] = (num / length) * ((num < 0) ? -1 : 1);
  while (parts[0] > 0 || parts[1] > 0)
  {
    str[size - i++] = basis[parts[1]];
    parts[1] = parts[0] % length;
    parts[0] = parts[0] / length;
  }
  str[size] = '\0';
  return (str);
}
