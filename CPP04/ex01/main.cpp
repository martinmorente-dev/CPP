/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 15:05:36 by mmorente          #+#    #+#             */
/*   Updated: 2026/10/09 17:07:36 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "Cat/Cat.hpp"
#include "Dog/Dog.hpp"

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

      // ---------- 1. Array de Animals: mitad Dog, mitad Cat ----------
    {
        std::cout << "===== ARRAY DE ANIMALS =====" << std::endl;

        const int size = 10;
        Animal *animals[size];

        for (int i = 0; i < size / 2; i++)
        {
            std::cout << "Creating dog " << i << std::endl;
            animals[i] = new Dog();
        }
        for (int i = size / 2; i < size; i++)
        {
            std::cout << "Creating cat " << i << std::endl;
            animals[i] = new Cat();
        }

        std::cout << "\n--- Sonidos ---" << std::endl;
        for (int i = 0; i < size; i++)
            animals[i]->makeSound();

        std::cout << "\n--- Borrando como Animal* ---" << std::endl;
        for (int i = 0; i < size; i++)
            delete animals[i];   // el destructor de Animal debe ser virtual
    }

    // ---------- 2. Test de copia profunda ----------
    {
        std::cout << "\n===== DEEP COPY TEST (Dog) =====" << std::endl;

        Dog original;
        original.getBrain()->setIdea(0, "Quiero un hueso");

        Dog copyCtor(original);      // constructor de copia
        Dog copyAssign;
        copyAssign = original;       // operador de asignación

        // Modifico el original DESPUÉS de copiar
        original.getBrain()->setIdea(0, "Quiero pasear");

        std::cout << "original   : " << original.getBrain()->getIdea(0) << std::endl;
        std::cout << "copyCtor   : " << copyCtor.getBrain()->getIdea(0) << std::endl;
        std::cout << "copyAssign : " << copyAssign.getBrain()->getIdea(0) << std::endl;

        std::cout << "Brain addresses:" << std::endl;
        std::cout << "  original   : " << original.getBrain() << std::endl;
        std::cout << "  copyCtor   : " << copyCtor.getBrain() << std::endl;
        std::cout << "  copyAssign : " << copyAssign.getBrain() << std::endl;
        // Direcciones distintas + ideas distintas = copia profunda
    }

    {
        std::cout << "\n===== DEEP COPY TEST (Cat) =====" << std::endl;

        Cat original;
        original.getBrain()->setIdea(0, "Quiero pescado");

        Cat copy(original);
        original.getBrain()->setIdea(0, "Quiero dormir");

        std::cout << "original : " << original.getBrain()->getIdea(0) << std::endl;
        std::cout << "copy     : " << copy.getBrain()->getIdea(0) << std::endl;
    }

  return (0);
}
