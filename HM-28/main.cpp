//
//  main.cpp
//  HM-28
//
//  Created by Дмитрий Сергеевич on 23.10.2023.
//

#include <iostream>
#include "Tree.hpp"
#include <vector>
#include <string>

int main() {
    Tree tree("Apple", 10, 2); // Создание объекта Tree
    print_tree(tree); // Вывод информации о дереве
    int fullPrice = full_price(tree); // Получение полной стоимости плодов на дереве
    std::cout << "Full price: " << fullPrice << std::endl;

    int collected = collect(tree, 1); // Сбор 1 плода с дерева
    std::cout << "Collected price: " << collected << std::endl;
    print_tree(tree);
    vector<Task> tasks; // Вектор для хранения задач
        
        readTasks(tasks); // Чтение задач из файла
        
        // Бесконечный цикл для взаимодействия с пользователем
        while (true) {
            std::cout << "1. Добавить задачу\n";
            std::cout << "2. Просмотреть задачи\n";
            std::cout << "3. Отметить задачу выполненной\n";
            std::cout << "0. Выход\n";
            std::cout << "Выберите действие: ";
            
            int choice;
            std::cin >> choice;
            std::cin.ignore();
            
            std::cout << std::endl;

    return 0;
}
