/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:54:48 by lfrasson          #+#    #+#             */
/*   Updated: 2021/12/05 21:24:18 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string> 
# include "IMateriaSource.hpp" 
# include "MateriaSource.hpp" 
# include "AMateria.hpp" 
# include "Ice.hpp" 
# include "Cure.hpp" 
# include "Character.hpp" 

static void	basicTests(void)
{
	std::cout << std::endl << "****** BASIC TESTS *******" << std::endl;
	std::cout << std::endl
		<< "------ Create materia source that learn two materias, "
		<< "Ice and Cure -------" << std::endl;
	
	IMateriaSource	*materiaSource = new MateriaSource();
	materiaSource->learnMateria(new Ice());
	materiaSource->learnMateria(new Cure());

	std::cout << std::endl
		<< "------ Create one character -------" << std::endl;
	Character *maria = new Character("Maria");

	std::cout << std::endl
		<< "------ Create the materias that source have"
		<< " and equipe Maria -------" << std::endl;
	
	AMateria *tmpMateria;
	tmpMateria = materiaSource->createMateria("ice");
	maria->equip(tmpMateria);
	tmpMateria = materiaSource->createMateria("cure");
	maria->equip(tmpMateria);

	Character *jose = new Character("Jose");
	maria->use(0, *jose);
	maria->use(1, *jose);
	
	delete jose;
	delete maria;
	delete materiaSource;
}

static void	deepCopyTests(void)
{
	std::cout << std::endl << "****** DEEP COPY TESTS *******" << std::endl;
	std::cout << std::endl
		<< "------ Create materia source that learn two materias, "
		<< "Ice and Cure -------" << std::endl;
	
	IMateriaSource	*materiaSource = new MateriaSource();
	materiaSource->learnMateria(new Ice());
	materiaSource->learnMateria(new Cure());

	/*IMateriaSource	*materiaSourceCopy = new MateriaSource(materiaSource);
	delete materiaSource;

	Character	*maria = new Character("Maria");
	
	AMateria	*materia;
	materia = materiaSourceCopy->createMateria("ice");
	maria->equip(materia);
	
	AMateria	*lastMateria;
	lastMateria = materiaSourceCopy->createMateria("cure");
	maria->equip(lastMateria);
*/
}

int		main(void)
{
	basicTests();
	deepCopyTests();
	//unequipTest();
	return 0;
}
