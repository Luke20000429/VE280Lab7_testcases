//
// VE280 Lab 7, SU2020
// Created by cyx on 20-5-25.
//

#include <iostream>

#include "course.h"

void test(){
    Course *eecs470 = create("Upper Level Technical","EECS470", true,6);
    eecs470->updateTask("Project",1,7,10);
    eecs470->updateTask("Lab",1,4,9);
    eecs470->updateTask("Team Project",1,5,6);
    eecs470->print();
    eecs470->finishTask("Lab",1,4,9);
    eecs470->updateTask("Assignment",1,9,8);
    eecs470->updateTask("Assignment",2,7,10);
    eecs470->updateTask("Lab",2,11,2);
    eecs470->print();
    eecs470->updateTask("Team Project",1,9,8);
    eecs470->print();
    eecs470->updateTask("Assignment",1,9,8);
    eecs470->print();
    eecs470->updateTask("Assignment",2,9,8);
    eecs470->finishTask("Assignment", 1, 9, 7);
    eecs470->print();
    eecs470->updateTask("Team Project", 2, 10 ,7);
    eecs470->updateTask("Team Project", 2, 9 ,7);
    eecs470->updateTask("Team Project", 2, 10 ,7);
    eecs470->print();
    eecs470->finishTask("Team Project", 1, 9, 10);
    eecs470->print();
}


int main() {

    try {
        test();
    }
    
    catch(tooManyTasks){
        std::cout << "Too many tasks\n";
    }

   
    return 0;
}


