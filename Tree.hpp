//
//  Tree.hpp
//  HM-28
//
//  Created by Дмитрий Сергеевич on 23.10.2023.
//

#ifndef Tree_hpp
#define Tree_hpp

#include <string>

struct Tree {
    std::string fruit;
    int fruits_number;
    int fruits;

    Tree(std::string fruit, int fruits_number, int fruits) : fruit(fruit), fruits_number(fruits_number), fruits(fruits) {}
};

void print_tree(const Tree& tree);
int full_price(const Tree& tree);
int collect(Tree& tree, int num_of_fruits);

#endif /* Tree_h */
