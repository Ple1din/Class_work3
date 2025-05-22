#ifndef IMAGEPOST_H
#define IMAGEPOST_H

#include "Post.h"

class ImagePost : public Post {
private:
    std::string filename;
    std::string resolution;

public:
    ImagePost(const std::string& author, const std::string& date, const std::string& content,
              const std::string& filename, const std::string& resolution);

    std::string display() const override;
};

#endif
