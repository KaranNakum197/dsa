#include <iostream>
#include <queue>   // Include queue header

int main() {
    std::queue<int> q;  // Create a queue of integers

    // Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);

    std::cout << "Front element: " << q.front() << std::endl;
    std::cout << "Size of queue: " << q.size() << std::endl;

    // Dequeue elements
    q.pop();

    std::cout << "\nAfter popping one element:" << std::endl;
    std::cout << "Front element: " << q.front() << std::endl;
    std::cout << "Size of queue: " << q.size() << std::endl;

    // Display all elements
    std::cout << "\nRemaining elements in queue:" << std::endl;
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
