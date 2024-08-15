// Todo.cpp
#include "todo.h"
#include <string>

Todo::Todo(int id, const std::string& name, bool done)
    : m_id(id), m_name(name), m_done(done) {}

std::string Todo::get_name() const {
    return m_name;
}

int Todo::get_id() const {
    return m_id;
}

bool Todo::is_done() const {
    return m_done;
}