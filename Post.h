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

    virtual std::string display() const;

    // Getters
    std::string getAuthor() const;
    std::string getDate() const;
    std::string getContent() const;

    // Setters
    void setAuthor(const std::string& author);
    void setDate(const std::string& date);
    void setContent(const std::string& content);
};

#endif
