/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 15:05:36 by mmorente          #+#    #+#             */
/*   Updated: 2026/10/02 15:25:59 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void)
{
  std::cout << "=== Test correcto ===" << std::endl;
  {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); // sonido de gato
    j->makeSound(); // sonido de perro
    meta->makeSound();

    delete meta;
    delete j;
    delete i;
  }

  std::cout << std::endl << "=== Test incorrecto ===" << std::endl;
  {
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongDog = new WrongDog();

    std::cout << wrongDog->getType() << " " << std::endl;

    wrongDog->makeSound(); // "Silence..." (NO ladra, makeSound no es virtual)
    wrongMeta->makeSound();

    delete wrongMeta;
    delete wrongDog;
  }

  return (0);
}
