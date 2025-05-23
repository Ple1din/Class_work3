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
    std::string display(const std::string& format) const;

    // Getters and setters
    std::string getFilename() const;
    void setFilename(const std::string& filename);

    std::string getResolution() const;
    void setResolution(const std::string& resolution);
};

#endif

