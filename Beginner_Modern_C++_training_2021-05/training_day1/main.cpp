#include <iostream>
#include <string>
#include <vector>

struct QA {
    std::string question;
    std::string answer;
};

std::string f(std::string q) {
    std::cout << "Q: " << q << std::endl;
    std::cout << "Input an answer: " << std::endl;
    std::string answer;
    std::cin >> answer;
    return answer;
}

int main(int argc, char *argv[])
{
    std::vector<QA> v;
    int number;
    std::cout << "Give Number of QA: ";
    std::cin >> number;
    for(int i = 0; i < number; i++) {
        std::cout << "Input a question: " << std::endl;
        QA qa;
        std::string q;
        std::cin >> q;
        qa.question = q;
        v.push_back(qa);
    }
    for(QA& qa: v) {
        qa.answer = f(qa.question);
    }
    for(const QA& qa: v) {
        std::cout << "Q: " << qa.question << ", A: " << qa.answer << std::endl;
    }
    return 0;
}
