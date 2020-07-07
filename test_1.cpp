#include <iostream>
#include "course.h"

int main() {
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
    delete eecs470;

    return 0;
}
