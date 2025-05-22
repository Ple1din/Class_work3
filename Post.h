#ifndef POST_H
#define POST_H

#include <string>

class Post {
protected:
    std::string author;
    std::string date;
    std::string content;

public:
    Post(const std::string& author, const std::string& date, const std::string& content);
    virtual ~Post() = default;

    virtual std::string display() const;  // Método virtual para mostrar detalles

    // Getters
    std::string getAuthor() const;
    std::string getDate() const;
    std::string getContent() const;
};

#endif
