#include "Post.h"

Post::Post(const std::string& author, const std::string& date, const std::string& content)
    : author(author), date(date), content(content) {}

std::string Post::display() const {
    return "--- Post ---\n"
           "Author: " + author + "\n" +
           "Date: " + date + "\n" +
           "Content: " + content + "\n" +
           "Details: No specific details available.\n";
}

std::string Post::getAuthor() const { return author; }
std::string Post::getDate() const { return date; }
std::string Post::getContent() const { return content; }
