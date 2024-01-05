/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_message.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 07:08:31 by paulo-do          #+#    #+#             */
/*   Updated: 2024/01/05 08:21:33 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ERROR_MESSAGE_H
# define FT_ERROR_MESSAGE_H

//					Memory Allocation Errors:
# define MEMORY_ERROR "Failed to allocate memory."
# define MEMORY_ERROR2 "Memory allocation failed in function" \
// MUST ADD %s function name
# define MEMORY_ERROR3 "Insufficient memory available for operation in" \
// same as upstairs
//					Invalid Input Parameters:
# define INPUT_ERROR "Invalid parameter(s) provided."
# define INPUT_ERROR2 "Input parameter out of range."
# define INPUT_ERROR3 "Argument validation failed in"// SAME AS THE OTHER
//					File Handling Errors:
# define FILE_ERROR "Failed to open file" // PUT FILE NAME
# define FILE_ERROR2 "Error while reading from file"//SAME
# define FILE_ERROR3 "File not found or inaccessible."
//					Data Structure Errors:
# define DATA_ERROR "List is empty."
# define DATA_ERROR2 "Invalid index in array/vector access."
# define DATA_ERROR3 "Error inserting element into the data structure."
//					String Handling Errors:
# define STRING_ERROR "String is NULL or empty."
# define STRING_ERROR2 "Buffer overflow detected."
# define STRING_ERROR3 "Invalid string operation in"//ADD FUNCTION NAME
//					Argument Errors:
# define ARGS_ERROR "Invalid number of arguments."
# define ARGS_ERROR2 "Incorrect argument format or type."
# define ARGS_ERROR3 "Missing required argument(s)."

#endif