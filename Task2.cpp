#include <iostream>

int score{ 0 };

void Q1()
{
    char ans1;
    do {
        std::cout << "Q1: What is the capital of France?\n";
        std::cout << "a) Berlin\nb) Madrid\nc) Paris\nd) Rome\n";
        std::cout << "Enter your answer : ";
        std::cin >> ans1;
        if (ans1 == 'a' || ans1 == 'b' || ans1 == 'c' || ans1 == 'd' || ans1 == 'A' || ans1 == 'B' || ans1 == 'C' || ans1 == 'D') {
            break;
        }
        else {
            std::cout << "Invalid input. Please enter a valid option (a, b, c, d).\n";
        }
    } while (true);

    if (ans1 == 'c' || ans1 == 'C') {
        std::cout << "You were right!\n";
        score = score + 1;
    }
    else {
        std::cout << "You were wrong!\n";
    }
}

void Q2()
{
    char ans2;
    do {
        std::cout << "Q2: Which planet is known as the Red Planet?\n";
        std::cout << "a) Venus\nb) Mars\nc) Jupiter\nd) Saturn\n";
        std::cout << "Enter your answer : ";
        std::cin >> ans2;
        if (ans2 == 'a' || ans2 == 'b' || ans2 == 'c' || ans2 == 'd' || ans2 == 'A' || ans2 == 'B' || ans2 == 'C' || ans2 == 'D') {
            break;
        }
        else {
            std::cout << "Invalid input. Please enter a valid option (a, b, c, d).\n";
        }
    } while (true);

    if (ans2 == 'b' || ans2 == 'B') {
        std::cout << "You were right!\n";
        score = score + 1;
    }
    else {
        std::cout << "You were wrong!\n";
    }
}

void Q3()
{
    char ans3;
    do {
        std::cout << "Q3: Who wrote the Indian national anthem Jana Gana Mana?\n";
        std::cout << "a) Rabindranath Tagore\nb) Bankim Chandra Chatterjee\nc) Mahatma Gandhi\nd) Sarojini Naidu\n";
        std::cout << "Enter your answer : ";
        std::cin >> ans3;
        if (ans3 == 'a' || ans3 == 'b' || ans3 == 'c' || ans3 == 'd' || ans3 == 'A' || ans3 == 'B' || ans3 == 'C' || ans3 == 'D') {
            break;
        }
        else {
            std::cout << "Invalid input. Please enter a valid option (a, b, c, d).\n";
        }
    } while (true);

    if (ans3 == 'a' || ans3 == 'A') {
        std::cout << "You were right!\n";
        score = score + 1;
    }
    else {
        std::cout << "You were wrong!\n";
    }
}

void Q4()
{
    char ans4;
    do {
        std::cout << "Q4: What is the chemical symbol of Gold?\n";
        std::cout << "a) Ag\nb) Au\nc) Gd\nd) Go\n";
        std::cout << "Enter your answer : ";
        std::cin >> ans4;
        if (ans4 == 'a' || ans4 == 'b' || ans4 == 'c' || ans4 == 'd' || ans4 == 'A' || ans4 == 'B' || ans4 == 'C' || ans4 == 'D') {
            break;
        }
        else {
            std::cout << "Invalid input. Please enter a valid option (a, b, c, d).\n";
        }
    } while (true);

    if (ans4 == 'b' || ans4 == 'B') {
        std::cout << "You were right!\n";
        score = score + 1;
    }
    else {
        std::cout << "You were wrong!\n";
    }
}

void Q5()
{
    char ans5;
    do {
        std::cout << "Q5: Who is known as the Father of Computers?\n";
        std::cout << "a) Charles Babbage\nb) Alan Turing\nc) Bill Gates\nd) Steve Jobs\n";
        std::cout << "Enter your answer : ";
        std::cin >> ans5;
        if (ans5 == 'a' || ans5 == 'b' || ans5 == 'c' || ans5 == 'd' || ans5 == 'A' || ans5 == 'B' || ans5 == 'C' || ans5 == 'D') {
            break;
        }
        else {
            std::cout << "Invalid input. Please enter a valid option (a, b, c, d).\n";
        }
    } while (true);

    if (ans5 == 'a' || ans5 == 'A') {
        std::cout << "You were right!\n";
        score = score + 1;
    }
    else {
        std::cout << "You were wrong!\n";
    }
}

int main()
{
    std::cout << "You will be given 5 questions, and you will then be given a score at the end!\n\nHave a great game! ;)\n";

    Q1();
    Q2();
    Q3();
    Q4();
    Q5();

    std::cout << "Your score is: " << score << std::endl;

    return 0;
}
