#include <iostream>
#include "todo.h"
#include "todos.h"

int main() {
  
  Todo todo1 = Todo(1, "Learn C++", false);
  Todo todo2 = Todo(2, "Learn Python", false);
  Todo todo3 = Todo(3, "Learn Java", false);

  Todos todos = Todos();
  todos.add_todo(todo1);
  todos.add_todo(todo2);
  todos.add_todo(todo3);

  todos.print_todos();
}
