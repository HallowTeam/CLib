/*
** project.h for  in /home/olivie_v//file
**
** Made by victor olivieri
** Login   <olivie_v@epitech.net>
**
** Started on  Mon Oct 29 08:29:01 2012 victor olivieri
** Last update Tue Nov 13 14:02:56 2012 victor olivieri
*/

int	my_strcmp(char *str1, char *str2)
{
  return (my_strncmp(str1, str2, my_max(my_strlen(str1), my_strlen(str2))));
}
