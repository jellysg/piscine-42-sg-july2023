#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h> //file control options (mainly for rdonly)
# include <stdio.h>
# include <stdlib.h>

/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Functions Index:
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	- write_0_19:
		To write numbers from 0-19 (because they use the -teen suffix)
	- write_20_99
		To write numbers from 20-99 (using -ty + base number e.g. forty two)
	- write_100
		To write the hundredths (usually appended with 10_19 or 20_99)
	- ft_write_number
		Write number lol
	- write_from_dict
		Referencing the numbers.dict to write
	- ft_putstr
		Ummmmmmm put string? xd
	- ft_strlen
		Length of string
	- num_check
		To make sure argument passed only contains numbers
	- trim_zero
		To trim the zeros (if any)
		e.g. 1,000,420 = One Million Four Hundred Twenty
		NOT  1,000,420 = One Million Zero Zero Zero Four Hundred Twenty Zero

	if got more we need, can always append here for reference before eval
	confirm need a few more but i cant think of any atm
*/


2011004	=	{002}\0  (when hit \0, print million)
		{011}\0  (when hit \0, print thousand)
		{004}\0  (when hit \0, end)
	
738292	=	{738}\0  (when hit \0, print thousand)
		{292}\0  (when hit \0, end)



void	write_0_19(char *number, int start_index, int end_index, char *dict_str);
//	write_0_19(char ptr, start, end, reference)

void	write_20_99(char *number, int start_index, int end_index, char *dict_str);
//	write_20_99(char ptr, start, end, reference)

void	write_100(char *number, int start_index, int end_index, char *dict_str);
//	write_100(char ptr, start, end, reference)

void	ft_write_number(char *number, int start_i, int end_i, char *dict_str);
//	ft_write_number(char ptr, start, end, reference)

int	write_from_dict(char *str_dict, char *number, int start_index, int end_index);
//	write_from_dict(dict ptr, char ptr, start, end)

void	ft_putstr(char *str);
//	ft_putstr(char ptr)

int	ft_strlen(char *str);
//	ft_strlen(char ptr)

int	num_check(char *arg);
//	num_check(argv ptr) [we can just cast (void) to argc if not using count]

char	*trim_zero(char *arg);
//	*trim_zero(argv ptr) [i think we need this]

#endif
