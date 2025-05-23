#ifndef VIDEPOST_H
#define VIDEPOST_H

#include "Post.h"

class VideoPost : public Post {
private:
    int duration;
    std::string quality;

public:
    VideoPost(const std::string& author, const std::string& date, const std::string& content,
              int duration, const std::string& quality);

    std::string display() const override;
    std::string display(const std::string& format) const;

    // Getters and setters
    int getDuration() const;
    void setDuration(int duration);

    std::string getQuality() const;
    void setQuality(const std::string& quality);
};

#endif

