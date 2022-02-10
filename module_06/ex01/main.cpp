/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:19:10 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/09 21:19:36 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "serialization.hpp" 

int	main(void)
{
	Data data;
	data.value = 10;
	data.string = "Alguma coisa";

	uintptr_t raw = serialize(&data);
	std::cout << raw << std::endl;

	Data* other_data = deserialize(raw);
	std::cout << other_data->value << std::endl;
	std::cout << other_data->string << std::endl;
	return 0;
}
