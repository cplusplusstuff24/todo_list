#ifndef TODOS_H
#define TODOS_H

#include <vector>
#include "todo.h"

class Todos {
    std::vector<Todo> todos;

public:
    void add_todo(const Todo& todo);
    void print_todos() const;
};

#endif 