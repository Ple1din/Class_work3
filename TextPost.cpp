#include "TextPost.h"

TextPost::TextPost(const std::string& author, const std::string& date, const std::string& content)
    : Post(author, date, content) {}

std::string TextPost::display() const {
    return "--- Post ---\n"
           "Author: " + author + "\n" +
           "Date: " + date + "\n" +
           "Content: " + content + "\n" +
           "Details: No specific details available.\n";
}
