#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
#include <string>

class Person {
        friend std::ostream& operator << (std::ostream& out, const Person& person);
    public :
        Person() = default;
        Person(std::string& first_name_param, std::string& last_name_param);

        // Getters
        std::string get_first_name() const;
        std::string get_last_name() const;

        // Setters
        void set_first_name(std::string_view first_name_param);
        void set_last_name(std::string_view last_name_param);
    private :
        std::string m_first_name{"Mysterious"};
        std::string m_last_name{"Person"};
};

#endif // PERSON_H