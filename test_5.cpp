//
// VE280 Lab 7, SU2020
// Created by cyx on 20-5-25.
//

#include <iostream>

#include "course.h"

void test(){
    Course *eecs470 = create("Upper Level Technical","EECS470", true,6);
    eecs470->print();
    eecs470->updateTask("Lab",1,4,9);
    eecs470->updateTask("Lab",1,4,9);
    eecs470->print();
    eecs470->updateTask("Lab",2,4,9);
    eecs470->updateTask("Lab",2,4,9);
    eecs470->print();
    eecs470->updateTask("Lab",3,4,9);
    eecs470->finishTask("Lab",2,4,9);
    eecs470->updateTask("Lab",3,4,9);
    eecs470->print();
    eecs470->updateTask("Lab",4,4,9);
    eecs470->finishTask("Lab",4,4,9);
    eecs470->updateTask("Lab",4,4,9);
    eecs470->print();
    eecs470->updateTask("Lab",5,4,9);
    eecs470->updateTask("Lab",5,4,9);
    eecs470->print();
    eecs470->updateTask("Lab",6,4,9);
    eecs470->updateTask("Lab",6,4,9);
    eecs470->print();
    eecs470->finishTask("Lab",1,4,9);
    eecs470->updateTask("Lab",7,4,9);
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


