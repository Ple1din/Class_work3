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
        // Mostrar display() siempre
        std::cout << post->display() << std::endl;
    }
    for (const auto& post : posts) {
        // Mostrar display("true") solo para ImagePost y VideoPost
        if (auto imgPost = std::dynamic_pointer_cast<ImagePost>(post)) {
            std::cout << imgPost->display("true") << std::endl;
        } else if (auto vidPost = std::dynamic_pointer_cast<VideoPost>(post)) {
            std::cout << vidPost->display("true") << std::endl;
        }
    }

    return 0;
}
