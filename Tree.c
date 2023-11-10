//
//  Tree.c
//  HM-28
//
//  Created by Дмитрий Сергеевич on 23.10.2023.
//
#ifndef Tree_hpp
#include <iostream>


void print_tree(const Tree& tree) {
    std::cout << "Fruit: " << tree.fruit << std::endl;
    std::cout << "Number of fruits: " << tree.fruits_number << std::endl;
    std::cout << "Price per fruit: " << tree.fruits << std::endl;
}

int full_price(const Tree& tree) {
    return tree.fruits_number * tree.fruits;
}

int collect(Tree& tree, int num_of_fruits) {
    if (num_of_fruits > tree.fruits_number) {
        num_of_fruits = tree.fruits_number;
    }

    tree.fruits_number -= num_of_fruits;
    return num_of_fruits * tree.fruits;
}

