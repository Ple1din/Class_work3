#include "ImagePost.h"

ImagePost::ImagePost(const std::string& author, const std::string& date, const std::string& content,
                     const std::string& filename, const std::string& resolution)
    : Post(author, date, content), filename(filename), resolution(resolution) {}

std::string ImagePost::display() const {
    return "--- Image Post ---\n"
           "Author: " + author + "\n" +
           "Date: " + date + "\n" +
           "Content: " + content + "\n" +
           "Image File: " + filename + "\n" +
           "Resolution: " + resolution + "\n";
}
