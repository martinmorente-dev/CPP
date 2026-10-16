/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 15:05:36 by mmorente          #+#    #+#             */
/*   Updated: 2026/10/16 17:45:39 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "Cat/Cat.hpp"
#include "Dog/Dog.hpp"

int main()
{
    std::cout << "=== Animal NO es instanciable ===" << std::endl;

    std::cout << "Animal no se puede instanciar directamente.\n" << std::endl;

    // ---------- Polimorfismo sigue funcionando ----------
    std::cout << "=== Polimorfismo (sigue funcionando) ===" << std::endl;
    {
        const Animal* dog = new Dog();
        const Animal* cat = new Cat();

        std::cout << dog->getType() << " " << std::endl;
        std::cout << cat->getType() << " " << std::endl;

        dog->makeSound();
        cat->makeSound();

        delete dog;
        delete cat;
    }

    // ---------- Array de Animals ----------
    {
        std::cout << "\n===== ARRAY DE ANIMALS =====" << std::endl;

        const int size = 6;
        Animal* animals[size];

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

        std::cout << "\n--- Borrando ---" << std::endl;
        for (int i = 0; i < size; i++)
            delete animals[i];
    }

    // ---------- Deep copy sigue funcionando ----------
    {
        std::cout << "\n===== DEEP COPY TEST (Dog) =====" << std::endl;

        Dog original;
        original.getBrain()->setIdea(0, "Quiero un hueso");

        Dog copyCtor(original);
        Dog copyAssign;
        copyAssign = original;

        original.getBrain()->setIdea(0, "Quiero pasear");

        std::cout << "original   : " << original.getBrain()->getIdea(0) << std::endl;
        std::cout << "copyCtor   : " << copyCtor.getBrain()->getIdea(0) << std::endl;
        std::cout << "copyAssign : " << copyAssign.getBrain()->getIdea(0) << std::endl;

        std::cout << "\nBrain addresses:" << std::endl;
        std::cout << "  original   : " << original.getBrain() << std::endl;
        std::cout << "  copyCtor   : " << copyCtor.getBrain() << std::endl;
        std::cout << "  copyAssign : " << copyAssign.getBrain() << std::endl;
    }

    std::cout << "\n=== Todo OK ===" << std::endl;
    return 0;
}
