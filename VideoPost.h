#ifndef VIDEPOST_H
#define VIDEPOST_H

#include "Post.h"

class VideoPost : public Post {
private:
    int duration; // en segundos
    std::string quality;

public:
    VideoPost(const std::string& author, const std::string& date, const std::string& content,
              int duration, const std::string& quality);

    std::string display() const override;
};

#endif
