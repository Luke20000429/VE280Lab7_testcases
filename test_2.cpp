#include <iostream>
#include "course.h"

int main() {
    Course *eecs470 = create("Upper Level Technical","EECS470", true,6);
    eecs470->updateTask("Project",1,10,10);
    eecs470->finishTask("Project",1,10,10);
    eecs470->updateTask("Project",1,11,11);
    eecs470->updateTask("Assignment",1,9,8);
    eecs470->updateTask("Assignment",2,9,8);
    eecs470->print();
    eecs470->finishTask("Assignment",1,10,10);
    eecs470->updateTask("Assignment",1,9,8);
    eecs470->updateTask("Assignment",2,9,9);
    eecs470->updateTask("Assignment",2,9,8);
    eecs470->print();
    eecs470->updateTask("Team Project",1,9,8);
    eecs470->print();
    delete eecs470;

    return 0;
}
