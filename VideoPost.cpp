#include "VideoPost.h"

VideoPost::VideoPost(const std::string& author, const std::string& date, const std::string& content,
                     int duration, const std::string& quality)
    : Post(author, date, content), duration(duration), quality(quality) {}

std::string VideoPost::display() const {
    return "--- Video Post ---\n"
           "Author: " + author + "\n" +
           "Date: " + date + "\n" +
           "Content: " + content + "\n" +
           "Duration: " + std::to_string(duration) + " seconds\n" +
           "Quality: " + quality + "\n";
}
