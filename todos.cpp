// Todos.cpp
#include "todos.h"
#include <iostream>

void Todos::add_todo(const Todo &todo) { todos.push_back(todo); }

void Todos::print_todos() const {
  for (const auto &todo : todos) {
    std::cout << todo.get_id() << " - " << todo.get_name() << ": " << todo.is_done() << std::endl;
  }
}