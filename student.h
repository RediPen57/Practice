#pragma once
#include <iostream>
#include <string>

namespace KimYeonjin2693058
{
    class class1
    {
        std::string name;
        int score;
        void testScore()
        {if ((score <0) || (score > 100))
        {std::exit(1);}}

     public:
        class1(std::string newName, int newScore) : name{newName}, score{newScore} {}
        void setName(const std::string& n) {name = n;}
        void setScore(const int& s) {score = s; testScore;}
        void input() {
            std::cout << "Enter name: "; std::getline(std::cin >> std::ws, name);
            std::cout << "Enter score: "; std::cin >> score; testScore;
        }
        void print() const {
            std::cout << "Name: " << name << ", Score: " << score << std::endl;
        }
        const std::string& getName() const { return name;}
        int getScore() const { return score;}
        class1 operator ++() { ++score; return *this; }
        class1& operator ++(int) { class1 temp {*this}; score ++;
             return *this; }
        class1&operator +=(const class1& a) {*this = *this + a.getScore; return *this;}
        friend std:: istream& operator>>(std::istream & is, class1& a)
        {
            std::cout << "Enter name: "; std::getline(is >> std::ws, a.name);
            std::cout << "Enter score: " is >> a.score; a.testScore();
            return is;
        }
        friend std:: ostream& operator<<(std::ostream& os, const class1& a)
        {
            os << a.getName << ', ' << a.score << std::endl;
            return os;
        }
        friend bool operator ==(const class1& a, const class1& b)
        {
            return a.getScore == b.getScore;
        }
        friend class1 operator +(const class1&a, const class1& b)
        {
        return class1{ a.getScore + b.getScore};
        }

        };

    }
