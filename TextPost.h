#ifndef TEXTPOST_H
#define TEXTPOST_H

#include "Post.h"

class TextPost : public Post {
public:
    TextPost(const std::string& author, const std::string& date, const std::string& content);

    std::string display() const override;
};

#endif
