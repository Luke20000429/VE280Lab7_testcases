//
// VE280 Lab 7, SU2020
// Created by cyx on 20-5-25.
//

#include <iostream>
#include "course.h"

int main() {

    Course *ve281 = create("Technical", "VE281", false, 10);
    try{
        ve281->updateTask("Lab", 1, 9, 23);
        ve281->updateTask("Lab", 2, 9, 29);
        ve281->updateTask("Lab", 3, 9, 27);
        ve281->updateTask("Lab", 4, 9, 22);
        ve281->finishTask("Lab", 4, 9, 20);
        ve281->updateTask("Lab", 5, 9, 23);
        ve281->updateTask("Lab", 6, 9, 23);
        ve281->finishTask("Lab", 1, 9, 20);
        ve281->print();
        ve281->finishTask("Lab", 1, 9, 23);
        ve281->updateTask("Lab", 2, 10, 2);
        ve281->updateTask("Project", 1, 10, 4);
        ve281->print();

    }
    catch(tooManyTasks){
        std::cout << "Too many tasks\n";
    }

    delete ve281;

    return 0;
}