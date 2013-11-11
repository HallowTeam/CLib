/*
** project.h for  in /home/olivie_v//file
**
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
**
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

char	*my_extstr(char *str, int curlen, int newlen)
{
  char	*copy;

  if ((copy = malloc(newlen * sizeof(*copy))) == NULL)
  {
    return (NULL);
  }
  if (curlen > 0)
  {
    my_strncpy(copy, str, curlen);
    free(str);
  }
  return (copy);
}
