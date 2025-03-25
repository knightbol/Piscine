#include <stdlib.h>
#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{

	
}

int	main(int argc, char **argv)
{
	
	return (0);
}



/*
 
 Basically we are converting a nbr from an original base, p.ex base10 to
 base 2 or hex or octal....

 They say that nbr base_from and base_to may not be writable. from my under
 -standing they mean that i somehow have no access to the values itself
 so that means that only the function caller has access to it. aka there is 
 no address passed onto the funciton im working on, so i wont be able to 
 change the values themselves but i can work with that just the same. 

 So from what im reading from C04 i should follow atoi rules: meaning the
 actual atoi we did.

 If there is an invalid argument the function should return 0, these can
 be: 1. Base is empty or size 1; 2. base contains the same char twice;
 3. base contains + or - or whitespaces.

 Im also told to implement an edge case check for numbers bigger than ints

 the returned numbers shouldn't include any + or whitespaces and only include
 the - sign if applicable.


 */
