#include <iostream>
#include <vector>
#include <memory>
#include "TextPost.h"
#include "ImagePost.h"
#include "VideoPost.h"

int main() {
    std::vector<std::shared_ptr<Post>> posts;

    posts.push_back(std::make_shared<TextPost>("john_doe", "2023-05-18", "Just had a great day at the beach!"));
    posts.push_back(std::make_shared<ImagePost>("jane_doe", "2023-05-19", "Look at this beautiful sunset!", "sunset.jpg", "1920x1080"));
    posts.push_back(std::make_shared<VideoPost>("mark_smith", "2023-05-20", "New tutorial on C++ programming!", 180, "1080p"));

    for (const auto& post : posts) {
        std::cout << post->display() << std::endl;
    }

    return 0;
}
