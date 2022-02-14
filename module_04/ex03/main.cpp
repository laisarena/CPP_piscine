/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:54:48 by lfrasson          #+#    #+#             */
/*   Updated: 2021/12/18 11:20:30 by lfrasson         ###   ########.fr       */
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
	std::cout << std::endl << "------ Create materia source that learn two materias, Ice and Cure -------" << std::endl;
	
	IMateriaSource	*materiaSource = new MateriaSource();
	materiaSource->learnMateria(new Ice());
	materiaSource->learnMateria(new Cure());

	std::cout << std::endl << "------ Create one character -------" << std::endl;
	Character *maria = new Character("Maria");

	std::cout << std::endl << "------ Create the materias through materia source and equipe Maria -------" << std::endl;
	AMateria *tmpMateria;
	tmpMateria = materiaSource->createMateria("ice");
	maria->equip(tmpMateria);
	tmpMateria = materiaSource->createMateria("cure");
	maria->equip(tmpMateria);

	std::cout << std::endl << "------ Create other character that Maria use his materias -------" << std::endl;
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
	std::cout << std::endl << "------ Create materia source that learn two materias, Ice and Cure -------" << std::endl;
	MateriaSource	*materiaSource = new MateriaSource();
	materiaSource->learnMateria(new Ice());
	materiaSource->learnMateria(new Cure());

	std::cout << std::endl << "------ Create a copy of that materia source, than delete the original " <<  std::endl;
	MateriaSource	*materiaSourceCopy = new MateriaSource(*materiaSource);
	delete materiaSource;

	std::cout << std::endl << "------ Create one character -------" << std::endl;
	Character	*maria = new Character("Maria");
	
	std::cout << std::endl << "------ Equip this character with materias created with materiaSourceCopy-------" << std::endl;
	AMateria	*materia;
	materia = materiaSourceCopy->createMateria("ice");
	maria->equip(materia);
	materia = materiaSourceCopy->createMateria("ice");
	maria->equip(materia);
	materia = materiaSourceCopy->createMateria("ice");
	maria->equip(materia);
	
	std::cout << std::endl << "------ Create other character -------" << std::endl;
	Character *jose = new Character("Jose");
	
	std::cout << std::endl << "------ Try use a materia from a empty slot -------" << std::endl;
	maria->use(3, *jose);

	std::cout << std::endl << "------ Equip last slot of Maria -------" << std::endl;
	AMateria	*lastMateria;
	lastMateria = materiaSourceCopy->createMateria("cure");
	maria->equip(lastMateria);
	
	std::cout << std::endl << "------ Try a equip for the fourth time -------" << std::endl;
	maria->equip(materia);
	
	std::cout << std::endl << "------ Unequip last slot and than equip again with the same materia to proof that was not deleted -------" << std::endl;
	maria->unequip(3);
	maria->equip(lastMateria);

	std::cout << std::endl << "------ Create a copy of Maria, then delete the original -------" << std::endl;
	Character *mariaCopy = new Character(*maria);
	delete maria;

	std::cout << std::endl << "------ MariaCopy use his materias -------" << std::endl;
	mariaCopy->use(0, *jose);
	mariaCopy->use(1, *jose);
	
	std::cout << std::endl << "------ Try create a unkown materia -------" << std::endl;
	materia = materiaSourceCopy->createMateria("nectar");

	delete jose;
	delete mariaCopy;
	delete materiaSourceCopy;
}

int		main(void)
{
	basicTests();
	deepCopyTests();
	return 0;
}
