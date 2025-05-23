#include "TextPost.h"

TextPost::TextPost(const std::string& author, const std::string& date, const std::string& content)
    : Post(author, date, content) {}

std::string TextPost::display() const {
    return "---Text Post---\n" + Post::display();
}

