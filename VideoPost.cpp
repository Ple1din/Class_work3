#include "VideoPost.h"

VideoPost::VideoPost(const std::string& author, const std::string& date, const std::string& content,
                     int duration, const std::string& quality)
    : Post(author, date, content), duration(duration), quality(quality) {}

std::string VideoPost::display() const {
    return "---Video Post---\n" "Author: " + author + "\nDate: " + date + "\nContent: " + content + "\n" + "Details: No specific details available.\n";
}

std::string VideoPost::display(const std::string& format) const {
    std::string result = "---Video Post---\n" "Author: " + author + "\nDate: " + date + "\nContent: " + content + "\n";
    if (format == "true") {
        result += "Duration: " + std::to_string(duration) + " sec\nQuality: " + quality + "\n";
    }
    return result;
}


int VideoPost::getDuration() const { return duration; }
void VideoPost::setDuration(int duration) { this->duration = duration; }

std::string VideoPost::getQuality() const { return quality; }
void VideoPost::setQuality(const std::string& quality) { this->quality = quality; }
