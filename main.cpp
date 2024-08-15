#include <iostream>
#include <vector>

// Todo class
class Todo {
  int m_id;
  std::string m_name;
  bool m_done;

public:
  Todo(int id, std::string name, bool done) {
    m_id = id;
    m_name = name;
    m_done = done;
  };

  // Getter function for m_name
  std::string get_name() const {
    return m_name;
  }
};

// Todos class
class Todos {
  std::vector<Todo> todos;

  public:

    void add_todo(Todo todo) {
      todos.push_back(todo);
    };

    void print_todos() {
      for (Todo todo : todos) {
        std::cout << todo.get_name() << std::endl;
      }
    }
};

int main() {

  std::cout << "Hello World!\n";
  Todo todo1 = Todo(1, "Learn C++", false);
  Todo todo2 = Todo(2, "Learn Python", false);
  Todo todo3 = Todo(3, "Learn Java", false);

  Todos todos = Todos();
  todos.add_todo(todo1);
  todos.add_todo(todo2);
  todos.add_todo(todo3);

  todos.print_todos();
}

