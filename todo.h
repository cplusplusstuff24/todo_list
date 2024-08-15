#ifndef TODO_H
#define TODO_H

#include <string>

class Todo {
    int m_id;
    std::string m_name;
    bool m_done;

public:
    Todo(int id, const std::string& name, bool done);
    std::string get_name() const;
    int get_id() const;
    bool is_done() const;
};

#endif // TODO_H