#include "ImagePost.h"

ImagePost::ImagePost(const std::string& author, const std::string& date, const std::string& content,
                     const std::string& filename, const std::string& resolution)
    : Post(author, date, content), filename(filename), resolution(resolution) {}

std::string ImagePost::display() const {
    return "---Image Post---\n" + Post::display();
}

std::string ImagePost::display(const std::string& format) const {
    std::string result ="---Image Post---\n" "Author: " + author + "\nDate: " + date + "\nContent: " + content + "\n";
    if (format == "true") {
        result += "Image File: " + filename + "\nResolution: " + resolution + "\n";
    }
    return result;
}


std::string ImagePost::getFilename() const { return filename; }
void ImagePost::setFilename(const std::string& filename) { this->filename = filename; }

std::string ImagePost::getResolution() const { return resolution; }
void ImagePost::setResolution(const std::string& resolution) { this->resolution = resolution; }
