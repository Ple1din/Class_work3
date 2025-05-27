#include "Post.h"

Post::Post(const std::string& author, const std::string& date, const std::string& content)
    : author(author), date(date), content(content) {}

std::string Post::getAuthor() const { return author; }
std::string Post::getDate() const { return date; }
std::string Post::getContent() const { return content; }

void Post::setAuthor(const std::string& author) { this->author = author; }
void Post::setDate(const std::string& date) { this->date = date; }
void Post::setContent(const std::string& content) { this->content = content; }
